// Copyright (c) 2011-2014 The Bitcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef WOLF_QT_WOLFADDRESSVALIDATOR_H
#define WOLF_QT_WOLFADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class WOLFAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit WOLFAddressEntryValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

/** WOLF address widget validator, checks for a valid wolf address.
 */
class WOLFAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit WOLFAddressCheckValidator(QObject *parent);

    State validate(QString &input, int &pos) const;
};

#endif // WOLF_QT_WOLFADDRESSVALIDATOR_H
