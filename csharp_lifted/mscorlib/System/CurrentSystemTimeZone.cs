// ==================== AoTTG2 cross-reference ====================
// Type: System.CurrentSystemTimeZone
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x20000A0")]
[Obsolete("System.CurrentSystemTimeZone has been deprecated.  Please investigate the use of System.TimeZoneInfo.Local instead.")]
internal class CurrentSystemTimeZone : TimeZone
{
	[Token(Token = "0x4000212")]
	[FieldOffset(Offset = "0x10")]
	private long m_ticksOffset;

	[Token(Token = "0x4000213")]
	[FieldOffset(Offset = "0x18")]
	private string m_standardName;

	[Token(Token = "0x4000214")]
	[FieldOffset(Offset = "0x20")]
	private string m_daylightName;

	[Token(Token = "0x4000215")]
	[FieldOffset(Offset = "0x28")]
	private readonly Hashtable m_CachedDaylightChanges;

	[Token(Token = "0x60005C2")]
	[Address(RVA = "0x5493500", Offset = "0x5492500", VA = "0x5493500")]
	internal CurrentSystemTimeZone()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005C3")]
	[Address(RVA = "0x5493600", Offset = "0x5492600", VA = "0x5493600")]
	public static extern bool GetTimeZoneData(int year, out long[] data, out string[] names, out bool daylight_inverted);
}
