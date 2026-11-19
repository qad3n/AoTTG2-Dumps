// ==================== AoTTG2 cross-reference ====================
// Type: System.TimeZoneInfo
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Globalization;
using System.Runtime.CompilerServices;
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x2000069")]
[TypeForwardedFrom("System.Core, Version=2.0.5.0, Culture=Neutral, PublicKeyToken=7cec85d7bea7798e")]
public sealed class TimeZoneInfo : IEquatable<TimeZoneInfo>, ISerializable, IDeserializationCallback
{
	[Token(Token = "0x200006A")]
	private struct TZifType
	{
		[Token(Token = "0x40001B0")]
		[FieldOffset(Offset = "0x0")]
		public readonly TimeSpan UtcOffset;

		[Token(Token = "0x40001B1")]
		[FieldOffset(Offset = "0x8")]
		public readonly bool IsDst;

		[Token(Token = "0x40001B2")]
		[FieldOffset(Offset = "0x9")]
		public readonly byte AbbreviationIndex;

		[Token(Token = "0x600036C")]
		[Address(RVA = "0x540FC70", Offset = "0x540EC70", VA = "0x540FC70")]
		public TZifType(byte[] data, int index)
		{
		}
	}

	[Token(Token = "0x200006B")]
	private struct TZifHead
	{
		[Token(Token = "0x40001B3")]
		[FieldOffset(Offset = "0x0")]
		public readonly uint Magic;

		[Token(Token = "0x40001B4")]
		[FieldOffset(Offset = "0x4")]
		public readonly TZVersion Version;

		[Token(Token = "0x40001B5")]
		[FieldOffset(Offset = "0x8")]
		public readonly uint IsGmtCount;

		[Token(Token = "0x40001B6")]
		[FieldOffset(Offset = "0xC")]
		public readonly uint IsStdCount;

		[Token(Token = "0x40001B7")]
		[FieldOffset(Offset = "0x10")]
		public readonly uint LeapCount;

		[Token(Token = "0x40001B8")]
		[FieldOffset(Offset = "0x14")]
		public readonly uint TimeCount;

		[Token(Token = "0x40001B9")]
		[FieldOffset(Offset = "0x18")]
		public readonly uint TypeCount;

		[Token(Token = "0x40001BA")]
		[FieldOffset(Offset = "0x1C")]
		public readonly uint CharCount;

		[Token(Token = "0x600036D")]
		[Address(RVA = "0x540FAA0", Offset = "0x540EAA0", VA = "0x540FAA0")]
		public TZifHead(byte[] data, int index)
		{
		}
	}

	[Token(Token = "0x200006C")]
	private enum TZVersion : byte
	{
		[Token(Token = "0x40001BC")]
		V1,
		[Token(Token = "0x40001BD")]
		V2,
		[Token(Token = "0x40001BE")]
		V3
	}

	[Serializable]
	[Token(Token = "0x200006D")]
	public sealed class AdjustmentRule : IEquatable<AdjustmentRule>, ISerializable, IDeserializationCallback
	{
		[Token(Token = "0x40001BF")]
		[FieldOffset(Offset = "0x10")]
		private readonly DateTime _dateStart;

		[Token(Token = "0x40001C0")]
		[FieldOffset(Offset = "0x18")]
		private readonly DateTime _dateEnd;

		[Token(Token = "0x40001C1")]
		[FieldOffset(Offset = "0x20")]
		private readonly TimeSpan _daylightDelta;

		[Token(Token = "0x40001C2")]
		[FieldOffset(Offset = "0x28")]
		private readonly TransitionTime _daylightTransitionStart;

		[Token(Token = "0x40001C3")]
		[FieldOffset(Offset = "0x40")]
		private readonly TransitionTime _daylightTransitionEnd;

		[Token(Token = "0x40001C4")]
		[FieldOffset(Offset = "0x58")]
		private readonly TimeSpan _baseUtcOffsetDelta;

		[Token(Token = "0x40001C5")]
		[FieldOffset(Offset = "0x60")]
		private readonly bool _noDaylightTransitions;

		[Token(Token = "0x17000045")]
		public DateTime DateStart
		{
			[Token(Token = "0x600036E")]
			[Address(RVA = "0x5415D60", Offset = "0x5414D60", VA = "0x5415D60")]
			get
			{
				return default(DateTime);
			}
		}

		[Token(Token = "0x17000046")]
		public DateTime DateEnd
		{
			[Token(Token = "0x600036F")]
			[Address(RVA = "0x5415D70", Offset = "0x5414D70", VA = "0x5415D70")]
			get
			{
				return default(DateTime);
			}
		}

		[Token(Token = "0x17000047")]
		public TimeSpan DaylightDelta
		{
			[Token(Token = "0x6000370")]
			[Address(RVA = "0x5415D80", Offset = "0x5414D80", VA = "0x5415D80")]
			get
			{
				return default(TimeSpan);
			}
		}

		[Token(Token = "0x17000048")]
		public TransitionTime DaylightTransitionStart
		{
			[Token(Token = "0x6000371")]
			[Address(RVA = "0x5415D90", Offset = "0x5414D90", VA = "0x5415D90")]
			get
			{
				return default(TransitionTime);
			}
		}

		[Token(Token = "0x17000049")]
		public TransitionTime DaylightTransitionEnd
		{
			[Token(Token = "0x6000372")]
			[Address(RVA = "0x5415DB0", Offset = "0x5414DB0", VA = "0x5415DB0")]
			get
			{
				return default(TransitionTime);
			}
		}

		[Token(Token = "0x1700004A")]
		internal TimeSpan BaseUtcOffsetDelta
		{
			[Token(Token = "0x6000373")]
			[Address(RVA = "0x5415DD0", Offset = "0x5414DD0", VA = "0x5415DD0")]
			get
			{
				return default(TimeSpan);
			}
		}

		[Token(Token = "0x1700004B")]
		internal bool NoDaylightTransitions
		{
			[Token(Token = "0x6000374")]
			[Address(RVA = "0x5415DE0", Offset = "0x5414DE0", VA = "0x5415DE0")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x1700004C")]
		internal bool HasDaylightSaving
		{
			[Token(Token = "0x6000375")]
			[Address(RVA = "0x5411000", Offset = "0x5410000", VA = "0x5411000")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6000376")]
		[Address(RVA = "0x5412260", Offset = "0x5411260", VA = "0x5412260", Slot = "4")]
		public bool Equals(AdjustmentRule other)
		{
			return default(bool);
		}

		[Token(Token = "0x6000377")]
		[Address(RVA = "0x5415F90", Offset = "0x5414F90", VA = "0x5415F90", Slot = "2")]
		public override int GetHashCode()
		{
			return default(int);
		}

		[Token(Token = "0x6000378")]
		[Address(RVA = "0x5415FE0", Offset = "0x5414FE0", VA = "0x5415FE0")]
		private AdjustmentRule(DateTime dateStart, DateTime dateEnd, TimeSpan daylightDelta, TransitionTime daylightTransitionStart, TransitionTime daylightTransitionEnd, TimeSpan baseUtcOffsetDelta, bool noDaylightTransitions)
		{
		}

		[Token(Token = "0x6000379")]
		[Address(RVA = "0x5415A10", Offset = "0x5414A10", VA = "0x5415A10")]
		public static AdjustmentRule CreateAdjustmentRule(DateTime dateStart, DateTime dateEnd, TimeSpan daylightDelta, TransitionTime daylightTransitionStart, TransitionTime daylightTransitionEnd)
		{
			return null;
		}

		[Token(Token = "0x600037A")]
		[Address(RVA = "0x540D8D0", Offset = "0x540C8D0", VA = "0x540D8D0")]
		internal static AdjustmentRule CreateAdjustmentRule(DateTime dateStart, DateTime dateEnd, TimeSpan daylightDelta, TransitionTime daylightTransitionStart, TransitionTime daylightTransitionEnd, TimeSpan baseUtcOffsetDelta, bool noDaylightTransitions)
		{
			return null;
		}

		[Token(Token = "0x600037B")]
		[Address(RVA = "0x5413830", Offset = "0x5412830", VA = "0x5413830")]
		internal bool IsStartDateMarkerForBeginningOfYear()
		{
			return default(bool);
		}

		[Token(Token = "0x600037C")]
		[Address(RVA = "0x5413950", Offset = "0x5412950", VA = "0x5413950")]
		internal bool IsEndDateMarkerForEndOfYear()
		{
			return default(bool);
		}

		[Token(Token = "0x600037D")]
		[Address(RVA = "0x54160A0", Offset = "0x54150A0", VA = "0x54160A0")]
		private static void ValidateAdjustmentRule(DateTime dateStart, DateTime dateEnd, TimeSpan daylightDelta, TransitionTime daylightTransitionStart, TransitionTime daylightTransitionEnd, bool noDaylightTransitions)
		{
		}

		[Token(Token = "0x600037E")]
		[Address(RVA = "0x54166B0", Offset = "0x54156B0", VA = "0x54166B0", Slot = "6")]
		private void System_002ERuntime_002ESerialization_002EIDeserializationCallback_002EOnDeserialization(object sender)
		{
		}

		[Token(Token = "0x600037F")]
		[Address(RVA = "0x54167C0", Offset = "0x54157C0", VA = "0x54167C0", Slot = "5")]
		private void System_002ERuntime_002ESerialization_002EISerializable_002EGetObjectData(SerializationInfo info, StreamingContext context)
		{
		}

		[Token(Token = "0x6000380")]
		[Address(RVA = "0x54169D0", Offset = "0x54159D0", VA = "0x54169D0")]
		private AdjustmentRule(SerializationInfo info, StreamingContext context)
		{
		}

		[Token(Token = "0x6000381")]
		[Address(RVA = "0x5416DA0", Offset = "0x5415DA0", VA = "0x5416DA0")]
		internal AdjustmentRule()
		{
		}
	}

	[Serializable]
	[Token(Token = "0x200006E")]
	public readonly struct TransitionTime : IEquatable<TransitionTime>, ISerializable, IDeserializationCallback
	{
		[Token(Token = "0x40001C6")]
		[FieldOffset(Offset = "0x0")]
		private readonly DateTime _timeOfDay;

		[Token(Token = "0x40001C7")]
		[FieldOffset(Offset = "0x8")]
		private readonly byte _month;

		[Token(Token = "0x40001C8")]
		[FieldOffset(Offset = "0x9")]
		private readonly byte _week;

		[Token(Token = "0x40001C9")]
		[FieldOffset(Offset = "0xA")]
		private readonly byte _day;

		[Token(Token = "0x40001CA")]
		[FieldOffset(Offset = "0xC")]
		private readonly DayOfWeek _dayOfWeek;

		[Token(Token = "0x40001CB")]
		[FieldOffset(Offset = "0x10")]
		private readonly bool _isFixedDateRule;

		[Token(Token = "0x1700004D")]
		public DateTime TimeOfDay
		{
			[Token(Token = "0x6000382")]
			[Address(RVA = "0x5416DD0", Offset = "0x5415DD0", VA = "0x5416DD0")]
			get
			{
				return default(DateTime);
			}
		}

		[Token(Token = "0x1700004E")]
		public int Month
		{
			[Token(Token = "0x6000383")]
			[Address(RVA = "0x5416DE0", Offset = "0x5415DE0", VA = "0x5416DE0")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x1700004F")]
		public int Week
		{
			[Token(Token = "0x6000384")]
			[Address(RVA = "0x5416DF0", Offset = "0x5415DF0", VA = "0x5416DF0")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x17000050")]
		public int Day
		{
			[Token(Token = "0x6000385")]
			[Address(RVA = "0x5416E00", Offset = "0x5415E00", VA = "0x5416E00")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x17000051")]
		public DayOfWeek DayOfWeek
		{
			[Token(Token = "0x6000386")]
			[Address(RVA = "0x5416E10", Offset = "0x5415E10", VA = "0x5416E10")]
			get
			{
				return default(DayOfWeek);
			}
		}

		[Token(Token = "0x17000052")]
		public bool IsFixedDateRule
		{
			[Token(Token = "0x6000387")]
			[Address(RVA = "0x5416E20", Offset = "0x5415E20", VA = "0x5416E20")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6000388")]
		[Address(RVA = "0x5416E30", Offset = "0x5415E30", VA = "0x5416E30", Slot = "0")]
		public override bool Equals(object obj)
		{
			return default(bool);
		}

		[Token(Token = "0x6000389")]
		[Address(RVA = "0x5415DF0", Offset = "0x5414DF0", VA = "0x5415DF0")]
		public static bool operator !=(TransitionTime t1, TransitionTime t2)
		{
			return default(bool);
		}

		[Token(Token = "0x600038A")]
		[Address(RVA = "0x5415ED0", Offset = "0x5414ED0", VA = "0x5415ED0", Slot = "4")]
		public bool Equals(TransitionTime other)
		{
			return default(bool);
		}

		[Token(Token = "0x600038B")]
		[Address(RVA = "0x5416F40", Offset = "0x5415F40", VA = "0x5416F40", Slot = "2")]
		public override int GetHashCode()
		{
			return default(int);
		}

		[Token(Token = "0x600038C")]
		[Address(RVA = "0x5416F50", Offset = "0x5415F50", VA = "0x5416F50")]
		private TransitionTime(DateTime timeOfDay, int month, int week, int day, DayOfWeek dayOfWeek, bool isFixedDateRule)
		{
		}

		[Token(Token = "0x600038D")]
		[Address(RVA = "0x540DD00", Offset = "0x540CD00", VA = "0x540DD00")]
		public static TransitionTime CreateFixedDateRule(DateTime timeOfDay, int month, int day)
		{
			return default(TransitionTime);
		}

		[Token(Token = "0x600038E")]
		[Address(RVA = "0x540EE40", Offset = "0x540DE40", VA = "0x540EE40")]
		public static TransitionTime CreateFloatingDateRule(DateTime timeOfDay, int month, int week, DayOfWeek dayOfWeek)
		{
			return default(TransitionTime);
		}

		[Token(Token = "0x600038F")]
		[Address(RVA = "0x5416FB0", Offset = "0x5415FB0", VA = "0x5416FB0")]
		private static void ValidateTransitionTime(DateTime timeOfDay, int month, int week, int day, DayOfWeek dayOfWeek)
		{
		}

		[Token(Token = "0x6000390")]
		[Address(RVA = "0x5417250", Offset = "0x5416250", VA = "0x5417250", Slot = "6")]
		private void System_002ERuntime_002ESerialization_002EIDeserializationCallback_002EOnDeserialization(object sender)
		{
		}

		[Token(Token = "0x6000391")]
		[Address(RVA = "0x5417340", Offset = "0x5416340", VA = "0x5417340", Slot = "5")]
		private void System_002ERuntime_002ESerialization_002EISerializable_002EGetObjectData(SerializationInfo info, StreamingContext context)
		{
		}

		[Token(Token = "0x6000392")]
		[Address(RVA = "0x54174C0", Offset = "0x54164C0", VA = "0x54174C0")]
		private TransitionTime(SerializationInfo info, StreamingContext context)
		{
		}
	}

	[Token(Token = "0x200006F")]
	private sealed class CachedData
	{
		[Token(Token = "0x40001CC")]
		[FieldOffset(Offset = "0x10")]
		private TimeZoneInfo _localTimeZone;

		[Token(Token = "0x17000053")]
		public TimeZoneInfo Local
		{
			[Token(Token = "0x6000394")]
			[Address(RVA = "0x54104C0", Offset = "0x540F4C0", VA = "0x54104C0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000393")]
		[Address(RVA = "0x54177E0", Offset = "0x54167E0", VA = "0x54177E0")]
		private TimeZoneInfo CreateLocal()
		{
			return null;
		}

		[Token(Token = "0x6000395")]
		[Address(RVA = "0x5410560", Offset = "0x540F560", VA = "0x5410560")]
		public DateTimeKind GetCorrespondingKind(TimeZoneInfo timeZone)
		{
			return default(DateTimeKind);
		}

		[Token(Token = "0x6000396")]
		[Address(RVA = "0x5415D20", Offset = "0x5414D20", VA = "0x5415D20")]
		public CachedData()
		{
		}
	}

	[Token(Token = "0x40001A3")]
	[FieldOffset(Offset = "0x10")]
	private readonly string _id;

	[Token(Token = "0x40001A4")]
	[FieldOffset(Offset = "0x18")]
	private readonly string _displayName;

	[Token(Token = "0x40001A5")]
	[FieldOffset(Offset = "0x20")]
	private readonly string _standardDisplayName;

	[Token(Token = "0x40001A6")]
	[FieldOffset(Offset = "0x28")]
	private readonly string _daylightDisplayName;

	[Token(Token = "0x40001A7")]
	[FieldOffset(Offset = "0x30")]
	private readonly TimeSpan _baseUtcOffset;

	[Token(Token = "0x40001A8")]
	[FieldOffset(Offset = "0x38")]
	private readonly bool _supportsDaylightSavingTime;

	[Token(Token = "0x40001A9")]
	[FieldOffset(Offset = "0x40")]
	private readonly AdjustmentRule[] _adjustmentRules;

	[Token(Token = "0x40001AA")]
	[FieldOffset(Offset = "0x0")]
	private static readonly TimeZoneInfo s_utcTimeZone;

	[Token(Token = "0x40001AB")]
	[FieldOffset(Offset = "0x8")]
	private static CachedData s_cachedData;

	[Token(Token = "0x40001AC")]
	[FieldOffset(Offset = "0x10")]
	private static readonly DateTime s_maxDateOnly;

	[Token(Token = "0x40001AD")]
	[FieldOffset(Offset = "0x18")]
	private static readonly DateTime s_minDateOnly;

	[Token(Token = "0x40001AE")]
	[FieldOffset(Offset = "0x20")]
	private static readonly TimeSpan MaxOffset;

	[Token(Token = "0x40001AF")]
	[FieldOffset(Offset = "0x28")]
	private static readonly TimeSpan MinOffset;

	[Token(Token = "0x1700003F")]
	public string DisplayName
	{
		[Token(Token = "0x6000335")]
		[Address(RVA = "0x540FDA0", Offset = "0x540EDA0", VA = "0x540FDA0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000040")]
	public string StandardName
	{
		[Token(Token = "0x6000336")]
		[Address(RVA = "0x540FDD0", Offset = "0x540EDD0", VA = "0x540FDD0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000041")]
	public string DaylightName
	{
		[Token(Token = "0x6000337")]
		[Address(RVA = "0x540FE00", Offset = "0x540EE00", VA = "0x540FE00")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000042")]
	public TimeSpan BaseUtcOffset
	{
		[Token(Token = "0x6000338")]
		[Address(RVA = "0x540FE30", Offset = "0x540EE30", VA = "0x540FE30")]
		get
		{
			return default(TimeSpan);
		}
	}

	[Token(Token = "0x17000043")]
	public static TimeZoneInfo Local
	{
		[Token(Token = "0x6000345")]
		[Address(RVA = "0x540C880", Offset = "0x540B880", VA = "0x540C880")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000044")]
	public static TimeZoneInfo Utc
	{
		[Token(Token = "0x6000347")]
		[Address(RVA = "0x5412550", Offset = "0x5411550", VA = "0x5412550")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000310")]
	[Address(RVA = "0x5409510", Offset = "0x5408510", VA = "0x5409510")]
	private TimeZoneInfo(byte[] data, string id, bool dstDisabled)
	{
	}

	[Token(Token = "0x6000311")]
	[Address(RVA = "0x540A770", Offset = "0x5409770", VA = "0x540A770")]
	private static TimeZoneInfo GetLocalTimeZone(CachedData cachedData)
	{
		return null;
	}

	[Token(Token = "0x6000312")]
	[Address(RVA = "0x540A970", Offset = "0x5409970", VA = "0x540A970")]
	private static bool TryGetLocalTzFile(out byte[] rawData, out string id)
	{
		return default(bool);
	}

	[Token(Token = "0x6000313")]
	[Address(RVA = "0x540ABB0", Offset = "0x5409BB0", VA = "0x540ABB0")]
	private static string GetTzEnvironmentVariable()
	{
		return null;
	}

	[Token(Token = "0x6000314")]
	[Address(RVA = "0x540AC20", Offset = "0x5409C20", VA = "0x540AC20")]
	private static bool TryLoadTzFile(string tzFilePath, ref byte[] rawData, ref string id)
	{
		return default(bool);
	}

	[Token(Token = "0x6000315")]
	[Address(RVA = "0x540AF50", Offset = "0x5409F50", VA = "0x540AF50")]
	private static string FindTimeZoneIdUsingReadLink(string tzFilePath)
	{
		return null;
	}

	[Token(Token = "0x6000316")]
	[Address(RVA = "0x540B2F0", Offset = "0x540A2F0", VA = "0x540B2F0")]
	private static string GetDirectoryEntryFullPath(ref global::Interop.Sys.DirectoryEntry dirent, string currentPath)
	{
		return null;
	}

	[Token(Token = "0x6000317")]
	[Address(RVA = "0x540B420", Offset = "0x540A420", VA = "0x540B420")]
	private static void EnumerateFilesRecursively(string path, Predicate<string> condition)
	{
	}

	[Token(Token = "0x6000318")]
	[Address(RVA = "0x540B040", Offset = "0x540A040", VA = "0x540B040")]
	private static string FindTimeZoneId(byte[] rawData)
	{
		return null;
	}

	[Token(Token = "0x6000319")]
	[Address(RVA = "0x540BC00", Offset = "0x540AC00", VA = "0x540BC00")]
	private static bool CompareTimeZoneFile(string filePath, byte[] buffer, byte[] rawData)
	{
		return default(bool);
	}

	[Token(Token = "0x600031A")]
	[Address(RVA = "0x540A7D0", Offset = "0x54097D0", VA = "0x540A7D0")]
	private static TimeZoneInfo GetLocalTimeZoneFromTzFile()
	{
		return null;
	}

	[Token(Token = "0x600031B")]
	[Address(RVA = "0x540BFB0", Offset = "0x540AFB0", VA = "0x540BFB0")]
	private static TimeZoneInfo GetTimeZoneFromTzData(byte[] rawData, string id)
	{
		return null;
	}

	[Token(Token = "0x600031C")]
	[Address(RVA = "0x540ADD0", Offset = "0x5409DD0", VA = "0x540ADD0")]
	private static string GetTimeZoneDirectory()
	{
		return null;
	}

	[Token(Token = "0x600031D")]
	[Address(RVA = "0x540C760", Offset = "0x540B760", VA = "0x540C760")]
	internal static TimeSpan GetDateTimeNowUtcOffsetFromUtc(DateTime time, out bool isAmbiguousLocalDst)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x600031E")]
	[Address(RVA = "0x540A230", Offset = "0x5409230", VA = "0x540A230")]
	private static void TZif_GenerateAdjustmentRules(out AdjustmentRule[] rules, TimeSpan baseUtcOffset, DateTime[] dts, byte[] typeOfLocalTime, TZifType[] transitionType, bool[] StandardTime, bool[] GmtTime, string futureTransitionsPosixFormat)
	{
	}

	[Token(Token = "0x600031F")]
	[Address(RVA = "0x540CC30", Offset = "0x540BC30", VA = "0x540CC30")]
	private static void TZif_GenerateAdjustmentRule(ref int index, TimeSpan timeZoneBaseUtcOffset, List<AdjustmentRule> rulesList, DateTime[] dts, byte[] typeOfLocalTime, TZifType[] transitionTypes, bool[] StandardTime, bool[] GmtTime, string futureTransitionsPosixFormat)
	{
	}

	[Token(Token = "0x6000320")]
	[Address(RVA = "0x540D800", Offset = "0x540C800", VA = "0x540D800")]
	private static TimeSpan TZif_CalculateTransitionOffsetFromBase(TimeSpan transitionOffset, TimeSpan timeZoneBaseUtcOffset)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x6000321")]
	[Address(RVA = "0x540D760", Offset = "0x540C760", VA = "0x540D760")]
	private static TZifType TZif_GetEarlyDateTransitionType(TZifType[] transitionTypes)
	{
		return default(TZifType);
	}

	[Token(Token = "0x6000322")]
	[Address(RVA = "0x540DD60", Offset = "0x540CD60", VA = "0x540DD60")]
	private static AdjustmentRule TZif_CreateAdjustmentRuleForPosixFormat(string posixFormat, DateTime startTransitionDate, TimeSpan timeZoneBaseUtcOffset)
	{
		return null;
	}

	[Token(Token = "0x6000323")]
	[Address(RVA = "0x540E570", Offset = "0x540D570", VA = "0x540E570")]
	private static TimeSpan? TZif_ParseOffsetString(string offset)
	{
		return null;
	}

	[Token(Token = "0x6000324")]
	[Address(RVA = "0x540EA10", Offset = "0x540DA10", VA = "0x540EA10")]
	private static DateTime ParseTimeOfDay(string time)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000325")]
	[Address(RVA = "0x540E770", Offset = "0x540D770", VA = "0x540E770")]
	private static TransitionTime? TZif_CreateTransitionTimeFromPosixRule(string date, string time)
	{
		return null;
	}

	[Token(Token = "0x6000326")]
	[Address(RVA = "0x540EEA0", Offset = "0x540DEA0", VA = "0x540EEA0")]
	private static void TZif_ParseJulianDay(string date, out int month, out int day)
	{
	}

	[Token(Token = "0x6000327")]
	[Address(RVA = "0x540EC60", Offset = "0x540DC60", VA = "0x540EC60")]
	private static bool TZif_ParseMDateRule(string dateRule, out int month, out int week, out DayOfWeek dayOfWeek)
	{
		return default(bool);
	}

	[Token(Token = "0x6000328")]
	[Address(RVA = "0x540E2F0", Offset = "0x540D2F0", VA = "0x540E2F0")]
	private static bool TZif_ParsePosixFormat(string posixFormat, out string standardName, out string standardOffset, out string daylightSavingsName, out string daylightSavingsOffset, out string start, out string startTime, out string end, out string endTime)
	{
		return default(bool);
	}

	[Token(Token = "0x6000329")]
	[Address(RVA = "0x540F060", Offset = "0x540E060", VA = "0x540F060")]
	private static string TZif_ParsePosixName(string posixFormat, ref int index)
	{
		return null;
	}

	[Token(Token = "0x600032A")]
	[Address(RVA = "0x540F300", Offset = "0x540E300", VA = "0x540F300")]
	private static string TZif_ParsePosixOffset(string posixFormat, ref int index)
	{
		return null;
	}

	[Token(Token = "0x600032B")]
	[Address(RVA = "0x540F460", Offset = "0x540E460", VA = "0x540F460")]
	private static void TZif_ParsePosixDateTime(string posixFormat, ref int index, out string date, out string time)
	{
	}

	[Token(Token = "0x600032C")]
	[Address(RVA = "0x540F5E0", Offset = "0x540E5E0", VA = "0x540F5E0")]
	private static string TZif_ParsePosixDate(string posixFormat, ref int index)
	{
		return null;
	}

	[Token(Token = "0x600032D")]
	[Address(RVA = "0x540F740", Offset = "0x540E740", VA = "0x540F740")]
	private static string TZif_ParsePosixTime(string posixFormat, ref int index)
	{
		return null;
	}

	[Token(Token = "0x600032E")]
	[Address(RVA = "0x540F540", Offset = "0x540E540", VA = "0x540F540")]
	private static string TZif_ParsePosixString(string posixFormat, ref int index, Func<char, bool> breakCondition)
	{
		return null;
	}

	[Token(Token = "0x600032F")]
	[Address(RVA = "0x540A1E0", Offset = "0x54091E0", VA = "0x540A1E0")]
	private static string TZif_GetZoneAbbreviation(string zoneAbbreviations, int index)
	{
		return null;
	}

	[Token(Token = "0x6000330")]
	[Address(RVA = "0x540F8A0", Offset = "0x540E8A0", VA = "0x540F8A0")]
	private static int TZif_ToInt32(byte[] value, int startIndex)
	{
		return default(int);
	}

	[Token(Token = "0x6000331")]
	[Address(RVA = "0x540F8C0", Offset = "0x540E8C0", VA = "0x540F8C0")]
	private static long TZif_ToInt64(byte[] value, int startIndex)
	{
		return default(long);
	}

	[Token(Token = "0x6000332")]
	[Address(RVA = "0x540F8F0", Offset = "0x540E8F0", VA = "0x540F8F0")]
	private static long TZif_ToUnixTime(byte[] value, int startIndex, TZVersion version)
	{
		return default(long);
	}

	[Token(Token = "0x6000333")]
	[Address(RVA = "0x540F9B0", Offset = "0x540E9B0", VA = "0x540F9B0")]
	private static DateTime TZif_UnixTimeToDateTime(long unixTime)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000334")]
	[Address(RVA = "0x5409B90", Offset = "0x5408B90", VA = "0x5409B90")]
	private static void TZif_ParseRaw(byte[] data, out TZifHead t, out DateTime[] dts, out byte[] typeOfLocalTime, out TZifType[] transitionType, out string zoneAbbreviations, out bool[] StandardTime, out bool[] GmtTime, out string futureTransitionsPosixFormat)
	{
	}

	[Token(Token = "0x6000339")]
	[Address(RVA = "0x540FE40", Offset = "0x540EE40", VA = "0x540FE40")]
	private AdjustmentRule GetPreviousAdjustmentRule(AdjustmentRule rule, int? ruleIndex)
	{
		return null;
	}

	[Token(Token = "0x600033A")]
	[Address(RVA = "0x540FF20", Offset = "0x540EF20", VA = "0x540FF20")]
	public TimeSpan GetUtcOffset(DateTime dateTime)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x600033B")]
	[Address(RVA = "0x5410400", Offset = "0x540F400", VA = "0x5410400")]
	internal static TimeSpan GetLocalUtcOffset(DateTime dateTime, System.TimeZoneInfoOptions flags)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x600033C")]
	[Address(RVA = "0x54104F0", Offset = "0x540F4F0", VA = "0x54104F0")]
	internal TimeSpan GetUtcOffset(DateTime dateTime, System.TimeZoneInfoOptions flags)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x600033D")]
	[Address(RVA = "0x540FF90", Offset = "0x540EF90", VA = "0x540FF90")]
	private TimeSpan GetUtcOffset(DateTime dateTime, System.TimeZoneInfoOptions flags, CachedData cachedData)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x600033E")]
	[Address(RVA = "0x5410600", Offset = "0x540F600", VA = "0x5410600")]
	internal static DateTime ConvertTime(DateTime dateTime, TimeZoneInfo sourceTimeZone, TimeZoneInfo destinationTimeZone, System.TimeZoneInfoOptions flags)
	{
		return default(DateTime);
	}

	[Token(Token = "0x600033F")]
	[Address(RVA = "0x5410910", Offset = "0x540F910", VA = "0x5410910")]
	private static DateTime ConvertTime(DateTime dateTime, TimeZoneInfo sourceTimeZone, TimeZoneInfo destinationTimeZone, System.TimeZoneInfoOptions flags, CachedData cachedData)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000340")]
	[Address(RVA = "0x5411E70", Offset = "0x5410E70", VA = "0x5411E70")]
	internal static DateTime ConvertTimeToUtc(DateTime dateTime, System.TimeZoneInfoOptions flags)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000341")]
	[Address(RVA = "0x5411F60", Offset = "0x5410F60", VA = "0x5411F60", Slot = "4")]
	public bool Equals(TimeZoneInfo other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000342")]
	[Address(RVA = "0x5412100", Offset = "0x5411100", VA = "0x5412100", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000343")]
	[Address(RVA = "0x5412170", Offset = "0x5411170", VA = "0x5412170", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000344")]
	[Address(RVA = "0x5411FB0", Offset = "0x5410FB0", VA = "0x5411FB0")]
	public bool HasSameRules(TimeZoneInfo other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000346")]
	[Address(RVA = "0x5412520", Offset = "0x5411520", VA = "0x5412520", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000348")]
	[Address(RVA = "0x54125C0", Offset = "0x54115C0", VA = "0x54125C0")]
	private TimeZoneInfo(string id, TimeSpan baseUtcOffset, string displayName, string standardDisplayName, string daylightDisplayName, AdjustmentRule[] adjustmentRules, bool disableDaylightSavingTime)
	{
	}

	[Token(Token = "0x6000349")]
	[Address(RVA = "0x54126D0", Offset = "0x54116D0", VA = "0x54126D0")]
	public static TimeZoneInfo CreateCustomTimeZone(string id, TimeSpan baseUtcOffset, string displayName, string standardDisplayName)
	{
		return null;
	}

	[Token(Token = "0x600034A")]
	[Address(RVA = "0x5412750", Offset = "0x5411750", VA = "0x5412750")]
	public static TimeZoneInfo CreateCustomTimeZone(string id, TimeSpan baseUtcOffset, string displayName, string standardDisplayName, string daylightDisplayName, AdjustmentRule[] adjustmentRules, bool disableDaylightSavingTime)
	{
		return null;
	}

	[Token(Token = "0x600034B")]
	[Address(RVA = "0x5412850", Offset = "0x5411850", VA = "0x5412850", Slot = "6")]
	private void System_002ERuntime_002ESerialization_002EIDeserializationCallback_002EOnDeserialization(object sender)
	{
	}

	[Token(Token = "0x600034C")]
	[Address(RVA = "0x5412A20", Offset = "0x5411A20", VA = "0x5412A20", Slot = "5")]
	private void System_002ERuntime_002ESerialization_002EISerializable_002EGetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x600034D")]
	[Address(RVA = "0x5412BC0", Offset = "0x5411BC0", VA = "0x5412BC0")]
	private TimeZoneInfo(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x600034E")]
	[Address(RVA = "0x5410FF0", Offset = "0x540FFF0", VA = "0x5410FF0")]
	private AdjustmentRule GetAdjustmentRuleForTime(DateTime dateTime, out int? ruleIndex)
	{
		return null;
	}

	[Token(Token = "0x600034F")]
	[Address(RVA = "0x5412FD0", Offset = "0x5411FD0", VA = "0x5412FD0")]
	private AdjustmentRule GetAdjustmentRuleForTime(DateTime dateTime, bool dateTimeisUtc, out int? ruleIndex)
	{
		return null;
	}

	[Token(Token = "0x6000350")]
	[Address(RVA = "0x54131A0", Offset = "0x54121A0", VA = "0x54131A0")]
	private int CompareAdjustmentRuleToDateTime(AdjustmentRule rule, AdjustmentRule previousRule, DateTime dateTime, DateTime dateOnly, bool dateTimeisUtc)
	{
		return default(int);
	}

	[Token(Token = "0x6000351")]
	[Address(RVA = "0x5413340", Offset = "0x5412340", VA = "0x5413340")]
	private DateTime ConvertToUtc(DateTime dateTime, TimeSpan daylightDelta, TimeSpan baseUtcOffsetDelta)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000352")]
	[Address(RVA = "0x54134F0", Offset = "0x54124F0", VA = "0x54134F0")]
	private DateTime ConvertFromUtc(DateTime dateTime, TimeSpan daylightDelta, TimeSpan baseUtcOffsetDelta)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000353")]
	[Address(RVA = "0x5413350", Offset = "0x5412350", VA = "0x5413350")]
	private DateTime ConvertToFromUtc(DateTime dateTime, TimeSpan daylightDelta, TimeSpan baseUtcOffsetDelta, bool convertToUtc)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000354")]
	[Address(RVA = "0x5411BB0", Offset = "0x5410BB0", VA = "0x5411BB0")]
	private static DateTime ConvertUtcToTimeZone(long ticks, TimeZoneInfo destinationTimeZone, out bool isAmbiguousLocalDst)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000355")]
	[Address(RVA = "0x5411230", Offset = "0x5410230", VA = "0x5411230")]
	private System.Globalization.DaylightTimeStruct GetDaylightTime(int year, AdjustmentRule rule, int? ruleIndex)
	{
		return default(System.Globalization.DaylightTimeStruct);
	}

	[Token(Token = "0x6000356")]
	[Address(RVA = "0x5411750", Offset = "0x5410750", VA = "0x5411750")]
	private static bool GetIsDaylightSavings(DateTime time, AdjustmentRule rule, System.Globalization.DaylightTimeStruct daylightTime, System.TimeZoneInfoOptions flags)
	{
		return default(bool);
	}

	[Token(Token = "0x6000357")]
	[Address(RVA = "0x54140B0", Offset = "0x54130B0", VA = "0x54140B0")]
	private TimeSpan GetDaylightSavingsStartOffsetFromUtc(TimeSpan baseUtcOffset, AdjustmentRule rule, int? ruleIndex)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x6000358")]
	[Address(RVA = "0x5414170", Offset = "0x5413170", VA = "0x5414170")]
	private TimeSpan GetDaylightSavingsEndOffsetFromUtc(TimeSpan baseUtcOffset, AdjustmentRule rule)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x6000359")]
	[Address(RVA = "0x54141E0", Offset = "0x54131E0", VA = "0x54141E0")]
	private static bool GetIsDaylightSavingsFromUtc(DateTime time, int year, TimeSpan utc, AdjustmentRule rule, int? ruleIndex, out bool isAmbiguousLocalDst, TimeZoneInfo zone)
	{
		return default(bool);
	}

	[Token(Token = "0x600035A")]
	[Address(RVA = "0x5413A70", Offset = "0x5412A70", VA = "0x5413A70")]
	private static bool CheckIsDst(DateTime startTime, DateTime time, DateTime endTime, bool ignoreYearAdjustment, AdjustmentRule rule)
	{
		return default(bool);
	}

	[Token(Token = "0x600035B")]
	[Address(RVA = "0x5413CD0", Offset = "0x5412CD0", VA = "0x5413CD0")]
	private static bool GetIsAmbiguousTime(DateTime time, AdjustmentRule rule, System.Globalization.DaylightTimeStruct daylightTime)
	{
		return default(bool);
	}

	[Token(Token = "0x600035C")]
	[Address(RVA = "0x5411370", Offset = "0x5410370", VA = "0x5411370")]
	private static bool GetIsInvalidTime(DateTime time, AdjustmentRule rule, System.Globalization.DaylightTimeStruct daylightTime)
	{
		return default(bool);
	}

	[Token(Token = "0x600035D")]
	[Address(RVA = "0x5410750", Offset = "0x540F750", VA = "0x5410750")]
	private static TimeSpan GetUtcOffset(DateTime time, TimeZoneInfo zone, System.TimeZoneInfoOptions flags)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x600035E")]
	[Address(RVA = "0x5410680", Offset = "0x540F680", VA = "0x5410680")]
	private static TimeSpan GetUtcOffsetFromUtc(DateTime time, TimeZoneInfo zone)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x600035F")]
	[Address(RVA = "0x5413500", Offset = "0x5412500", VA = "0x5413500")]
	private static TimeSpan GetUtcOffsetFromUtc(DateTime time, TimeZoneInfo zone, out bool isDaylightSavings)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x6000360")]
	[Address(RVA = "0x540C920", Offset = "0x540B920", VA = "0x540C920")]
	internal static TimeSpan GetUtcOffsetFromUtc(DateTime time, TimeZoneInfo zone, out bool isDaylightSavings, out bool isAmbiguousLocalDst)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x6000361")]
	[Address(RVA = "0x5413570", Offset = "0x5412570", VA = "0x5413570")]
	internal static DateTime TransitionTimeToDateTime(int year, TransitionTime transitionTime)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000362")]
	[Address(RVA = "0x540A3C0", Offset = "0x54093C0", VA = "0x540A3C0")]
	private static void ValidateTimeZoneInfo(string id, TimeSpan baseUtcOffset, AdjustmentRule[] adjustmentRules, out bool adjustmentRulesSupportDst)
	{
	}

	[Token(Token = "0x6000363")]
	[Address(RVA = "0x5414B00", Offset = "0x5413B00", VA = "0x5414B00")]
	internal static bool UtcOffsetOutOfRange(TimeSpan offset)
	{
		return default(bool);
	}

	[Token(Token = "0x6000364")]
	[Address(RVA = "0x5414C20", Offset = "0x5413C20", VA = "0x5414C20")]
	private static TimeSpan GetUtcOffset(TimeSpan baseUtcOffset, AdjustmentRule adjustmentRule)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x6000365")]
	[Address(RVA = "0x540D9D0", Offset = "0x540C9D0", VA = "0x540D9D0")]
	private static bool IsValidAdjustmentRuleOffest(TimeSpan baseUtcOffset, AdjustmentRule adjustmentRule)
	{
		return default(bool);
	}

	[Token(Token = "0x6000366")]
	[Address(RVA = "0x540DA30", Offset = "0x540CA30", VA = "0x540DA30")]
	private static void NormalizeAdjustmentRuleOffset(TimeSpan baseUtcOffset, ref AdjustmentRule adjustmentRule)
	{
	}

	[Token(Token = "0x6000367")]
	[Address(RVA = "0x5414CF0", Offset = "0x5413CF0", VA = "0x5414CF0")]
	private static string GetTimeZoneDirectoryUnity()
	{
		return null;
	}

	[Token(Token = "0x6000368")]
	[Address(RVA = "0x5414D10", Offset = "0x5413D10", VA = "0x5414D10")]
	private static List<AdjustmentRule> CreateAdjustmentRule(int year, out long[] data, out string[] names)
	{
		return null;
	}

	[Token(Token = "0x6000369")]
	[Address(RVA = "0x540C170", Offset = "0x540B170", VA = "0x540C170")]
	private static TimeZoneInfo CreateLocalUnity()
	{
		return null;
	}

	[Token(Token = "0x600036B")]
	[Address(RVA = "0x5415D30", Offset = "0x5414D30", VA = "0x5415D30")]
	internal TimeZoneInfo()
	{
	}
}
