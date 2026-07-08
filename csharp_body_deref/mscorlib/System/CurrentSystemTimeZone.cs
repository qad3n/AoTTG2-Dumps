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
	[Address(RVA = "0x4FA9C60", Offset = "0x4FA9C60", VA = "0x4FA9C60")]
	internal CurrentSystemTimeZone()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60005B9")]
	[Address(RVA = "0x4FA9D60", Offset = "0x4FA9D60", VA = "0x4FA9D60")]
	public static extern bool GetTimeZoneData(int year, out long[] data, out string[] names, out bool daylight_inverted);
}
