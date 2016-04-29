/**
 * Copyright (C) 2015 Deepin Technology Co., Ltd.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 **/

/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp -c DBusEntryManager -p dbusentrymanager dde.dock.EntryManager.xml
 *
 * qdbusxml2cpp is Copyright (C) 2015 Digia Plc and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#ifndef DBUSENTRYMANAGER_H_1435836026
#define DBUSENTRYMANAGER_H_1435836026

#include <QtCore/QObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>
#include <QtDBus/QtDBus>

/*
 * Proxy class for interface dde.dock.EntryManager
 */
class DBusEntryManager: public QDBusAbstractInterface
{
    Q_OBJECT
public:
    static inline const char *staticServerPath()
    { return "com.deepin.daemon.Dock"; }
    static inline const char *staticInterfacePath()
    { return "/dde/dock/EntryManager"; }
    static inline const char *staticInterfaceName()
    { return "dde.dock.EntryManager"; }

public:
    DBusEntryManager(QObject *parent = 0);

    ~DBusEntryManager();

    Q_PROPERTY(QList<QDBusObjectPath> Entries READ entries)
    inline QList<QDBusObjectPath> entries() const
    { return qvariant_cast< QList<QDBusObjectPath> >(property("Entries")); }

public Q_SLOTS: // METHODS
    inline QDBusPendingReply<> Reorder(const QStringList &in0)
    {
        QList<QVariant> argumentList;
        argumentList << QVariant::fromValue(in0);
        return asyncCallWithArgumentList(QStringLiteral("Reorder"), argumentList);
    }

Q_SIGNALS: // SIGNALS
    void Added(const QDBusObjectPath &in0);
    void Removed(const QString &in0);
    void TrayInited();
};

namespace dde {
  namespace dock {
    typedef ::DBusEntryManager EntryManager;
  }
}
#endif
