/*
 * Copyright (C) 2009 Niek Linnenbank, 2014 @Mcscx (quitter.se/mcscx)
 * 
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <Macros.h>
#include "errno.h"

int errno USED = 0;

char * error_map[] USED =

    [-ESUCCESS]		= "Erfolg",
    [-E2BIG]		= "Argumentliste zu lang",
    [-EACCES]		= "Zugriff verweigert",
    [-EADDRINUSE]	= "Adresse ist in Benutzung",
    [-EADDRNOTAVAIL]	= "Adresse ist nicht verfügbar",
    [-EAFNOSUPPORT]	= "Adressenfamilie wird nicht unterstützt",
    [-EAGAIN]		= "Ressource zur Zeit nicht verfügbar",
    [-EALREADY]		= "Verbindung wird bereits aufgebaut",
    [-EBADF]		= "ungültiger Datei-Deskriptor",
    [-EBADMSG]		= "Meldung nicht in Ordnung",
    [-EBUSY]		= "Gerät oder Ressource ist beschäftigt",
    [-ECANCELED]	= "Vorgang abgebrochen",
    [-ECHILD]		= "Keine Kind-Prozesse",
    [-ECONNABORTED]	= "Verbindung abgebrochen",
    [-ECONNREFUSED]	= "Verbindung zurückgewiesen",
    [-ECONNRESET]	= "Verbindung zurückgesetzt",
    [-EDEADLK]		= "würde zu einem Resource-Deadlock führen",
    [-EDESTADDRREQ]	= "Zieladresse erforderlich",
    [-EDOM]		= "mathematisches Argument außerhalb des Funktionsbereichs",
    [-EDQUOT]		= "reserviert",
    [-EEXIST]		= "Datei existiert bereits",
    [-EFAULT]		= "ungültige Adresse",
    [-EFBIG]		= "Datei zu groß",
    [-EHOSTUNREACH]	= "Host ist nicht erreichbar",
    [-EIDRM]		= "Identifier entfernt",
    [-EILSEQ]		= "Illegale Bytefolge",
    [-EINPROGRESS]	= "Operation läuft bereits",
    [-EINTR]		= "unterbrochene Funktion",
    [-EINVAL]		= "ungültiges Argument",
    [-EIO]		= "I/O-Fehler",
    [-EISCONN]		= "Socket ist verbunden",
    [-EISDIR]		= "ist ein Verzeichnis",
    [-ELOOP]		= "zu viele Stufen symbolischer Links",
    [-EMFILE]		= "Dateideskriptor-Wert zu groß",
    [-EMLINK]		= "zu viele Links",
    [-EMSGSIZE]		= "Nachricht zu groß",
    [-EMULTIHOP]	= "reserviert",
    [-ENAMETOOLONG]	= "Dateiname zu lang",
    [-ENETDOWN]		= "Netzwerk ist down",
    [-ENETRESET]	= "Verbindung vom Netzwerk abgebrochen",
    [-ENETUNREACH]	= "Netzwerk nicht erreichbar",
    [-ENFILE]		= "zu viele Dateien im System geöffnet",
    [-ENOBUFS]		= "kein Puffer verfügbar",
    [-ENODATA]		= "Keine Nachricht verfügbar auf der STREAM head read Warteschlange",
    [-ENODEV]		= "Kein solches Gerät",
    [-ENOENT]		= "Kein solche Datei oder Verzeichnis",
    [-ENOEXEC]		= "Fehlerhaftes Format der ausführbaren Datei",
    [-ENOLCK]		= "Keine Locks verfügbar",
    [-ENOLINK]		= "Reserviert",
    [-ENOMEM]		= "Nicht genug Speicher verfügbar",
    [-ENOMSG]		= "Keine Nachricht des gewünschten Typs",
    [-ENOPROTOOPT]	= "Protokoll nicht verfügbar",
    [-ENOSPC]		= "Kein freier Platz auf Gerät",
    [-ENOSR]		= "Keine STREAM-Ressourcen",
    [-ENOSTR]		= "Ist kein STREAM",
    [-ENOSYS]		= "Funktion nicht unterstützt",
    [-ENOTCONN]		= "Der Socket ist nicht verbunden",
    [-ENOTDIR]		= "Ist kein Verzeichnis",
    [-ENOTEMPTY]	= "Verzeichnis ist nicht leer",
    [-ENOTRECOVERABLE]	= "Status nicht verfügbar",
    [-ENOTSOCK]		= "Ist kein Socket",
    [-ENOTSUP]		= "Operation nicht unterstützt",
    [-ENOTTY]		= "Unpassende I/O-Steuerungs-Operation",
    [-ENXIO]		= "Kein solches Gerät oder Adresse",
    [-EOPNOTSUPP]	= "Operation nicht unterstützt bei Socket",
    [-EOVERFLOW]	= "Wert zu groß zur Speicherung in diesem Datentyp",
    [-EOWNERDEAD]	= "Vorheriger Eigentümer ist tot",
    [-EPERM]		= "Operation nicht erlaubt",
    [-EPIPE]		= "Unterbrochene Pipe",
    [-EPROTO]		= "Protokoll-Fehler",
    [-EPROTONOSUPPORT]	= "Protokoll nicht unterstützt",
    [-EPROTOTYPE]	= "Protokoll falscher Typ für Socket",
    [-ERANGE]		= "Ergebnis zu groß",
    [-EROFS]		= "Readonly-Dateisystem",
    [-ESPIPE]		= "Ungültiger Seek",
    [-ESRCH]		= "Kein solcher Prozess",
    [-ESTALE]		= "Reserviert",
    [-ETIME]		= "Stream ioctl() Zeitüberschreitung",
    [-ETIMEDOUT]	= "Verbindungs-Zeitüberschreitung",
    [-ETXTBSY]		= "Textdatei in Zugriff",
    [-EWOULDBLOCK]	= "Operation würde blockieren",
    [-EXDEV]		= "Cross-Device-Link"
};
