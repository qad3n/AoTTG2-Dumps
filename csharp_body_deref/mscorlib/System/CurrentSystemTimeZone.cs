// ==================== AoTTG2 cross-reference ====================
// Type: System.CurrentSystemTimeZone
// Update status: unchanged since the previous dump
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
	[Token(Token = "0x400021F")]
	[FieldOffset(Offset = "0x10")]
	private long m_ticksOffset;

	[Token(Token = "0x4000220")]
	[FieldOffset(Offset = "0x18")]
	private string m_standardName;

	[Token(Token = "0x4000221")]
	[FieldOffset(Offset = "0x20")]
	private string m_daylightName;

	[Token(Token = "0x4000222")]
	[FieldOffset(Offset = "0x28")]
	private readonly Hashtable m_CachedDaylightChanges;

	[Token(Token = "0x60005B8")]
	[Address(RVA = "0x3C8F780", Offset = "0x3C8F780", VA = "0x3C8F780")]
	internal CurrentSystemTimeZone()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005B9")]
	[Address(RVA = "0x3C8F880", Offset = "0x3C8F880", VA = "0x3C8F880")]
	public static extern bool GetTimeZoneData(int year, out long[] data, out string[] names, out bool daylight_inverted);
}
