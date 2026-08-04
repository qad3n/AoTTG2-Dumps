// ==================== AoTTG2 cross-reference ====================
// Type: System.TimeZoneInfo
// Update status: unchanged since the previous dump
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

		[Token(Token = "0x6000364")]
		[Address(RVA = "0x3C09A60", Offset = "0x3C09A60", VA = "0x3C09A60")]
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

		[Token(Token = "0x6000365")]
		[Address(RVA = "0x3C09890", Offset = "0x3C09890", VA = "0x3C09890")]
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
			[Token(Token = "0x6000366")]
			[Address(RVA = "0x3C0FAE0", Offset = "0x3C0FAE0", VA = "0x3C0FAE0")]
			get
			{
				return default(DateTime);
			}
		}

		[Token(Token = "0x17000046")]
		public DateTime DateEnd
		{
			[Token(Token = "0x6000367")]
			[Address(RVA = "0x3C0FAF0", Offset = "0x3C0FAF0", VA = "0x3C0FAF0")]
			get
			{
				return default(DateTime);
			}
		}

		[Token(Token = "0x17000047")]
		public TimeSpan DaylightDelta
		{
			[Token(Token = "0x6000368")]
			[Address(RVA = "0x3C0FB00", Offset = "0x3C0FB00", VA = "0x3C0FB00")]
			get
			{
				return default(TimeSpan);
			}
		}

		[Token(Token = "0x17000048")]
		public TransitionTime DaylightTransitionStart
		{
			[Token(Token = "0x6000369")]
			[Address(RVA = "0x3C0FB10", Offset = "0x3C0FB10", VA = "0x3C0FB10")]
			get
			{
				return default(TransitionTime);
			}
		}

		[Token(Token = "0x17000049")]
		public TransitionTime DaylightTransitionEnd
		{
			[Token(Token = "0x600036A")]
			[Address(RVA = "0x3C0FB30", Offset = "0x3C0FB30", VA = "0x3C0FB30")]
			get
			{
				return default(TransitionTime);
			}
		}

		[Token(Token = "0x1700004A")]
		internal TimeSpan BaseUtcOffsetDelta
		{
			[Token(Token = "0x600036B")]
			[Address(RVA = "0x3C0FB50", Offset = "0x3C0FB50", VA = "0x3C0FB50")]
			get
			{
				return default(TimeSpan);
			}
		}

		[Token(Token = "0x1700004B")]
		internal bool NoDaylightTransitions
		{
			[Token(Token = "0x600036C")]
			[Address(RVA = "0x3C0FB60", Offset = "0x3C0FB60", VA = "0x3C0FB60")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x1700004C")]
		internal bool HasDaylightSaving
		{
			[Token(Token = "0x600036D")]
			[Address(RVA = "0x3C0AE10", Offset = "0x3C0AE10", VA = "0x3C0AE10")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x600036E")]
		[Address(RVA = "0x3C0C100", Offset = "0x3C0C100", VA = "0x3C0C100", Slot = "4")]
		public bool Equals(AdjustmentRule other)
		{
			return default(bool);
		}

		[Token(Token = "0x600036F")]
		[Address(RVA = "0x3C0FD10", Offset = "0x3C0FD10", VA = "0x3C0FD10", Slot = "2")]
		public override int GetHashCode()
		{
			return default(int);
		}

		[Token(Token = "0x6000370")]
		[Address(RVA = "0x3C0FD70", Offset = "0x3C0FD70", VA = "0x3C0FD70")]
		private AdjustmentRule(DateTime dateStart, DateTime dateEnd, TimeSpan daylightDelta, TransitionTime daylightTransitionStart, TransitionTime daylightTransitionEnd, TimeSpan baseUtcOffsetDelta, bool noDaylightTransitions)
		{
		}

		[Token(Token = "0x6000371")]
		[Address(RVA = "0x3C0F730", Offset = "0x3C0F730", VA = "0x3C0F730")]
		public static AdjustmentRule CreateAdjustmentRule(DateTime dateStart, DateTime dateEnd, TimeSpan daylightDelta, TransitionTime daylightTransitionStart, TransitionTime daylightTransitionEnd)
		{
			return null;
		}

		[Token(Token = "0x6000372")]
		[Address(RVA = "0x3C075B0", Offset = "0x3C075B0", VA = "0x3C075B0")]
		internal static AdjustmentRule CreateAdjustmentRule(DateTime dateStart, DateTime dateEnd, TimeSpan daylightDelta, TransitionTime daylightTransitionStart, TransitionTime daylightTransitionEnd, TimeSpan baseUtcOffsetDelta, bool noDaylightTransitions)
		{
			return null;
		}

		[Token(Token = "0x6000373")]
		[Address(RVA = "0x3C0D700", Offset = "0x3C0D700", VA = "0x3C0D700")]
		internal bool IsStartDateMarkerForBeginningOfYear()
		{
			return default(bool);
		}

		[Token(Token = "0x6000374")]
		[Address(RVA = "0x3C0D830", Offset = "0x3C0D830", VA = "0x3C0D830")]
		internal bool IsEndDateMarkerForEndOfYear()
		{
			return default(bool);
		}

		[Token(Token = "0x6000375")]
		[Address(RVA = "0x3C0FE30", Offset = "0x3C0FE30", VA = "0x3C0FE30")]
		private static void ValidateAdjustmentRule(DateTime dateStart, DateTime dateEnd, TimeSpan daylightDelta, TransitionTime daylightTransitionStart, TransitionTime daylightTransitionEnd, bool noDaylightTransitions)
		{
		}

		[Token(Token = "0x6000376")]
		[Address(RVA = "0x3C10430", Offset = "0x3C10430", VA = "0x3C10430", Slot = "6")]
		private void System_002ERuntime_002ESerialization_002EIDeserializationCallback_002EOnDeserialization(object sender)
		{
		}

		[Token(Token = "0x6000377")]
		[Address(RVA = "0x3C10540", Offset = "0x3C10540", VA = "0x3C10540", Slot = "5")]
		private void System_002ERuntime_002ESerialization_002EISerializable_002EGetObjectData(SerializationInfo info, StreamingContext context)
		{
		}

		[Token(Token = "0x6000378")]
		[Address(RVA = "0x3C10750", Offset = "0x3C10750", VA = "0x3C10750")]
		private AdjustmentRule(SerializationInfo info, StreamingContext context)
		{
		}

		[Token(Token = "0x6000379")]
		[Address(RVA = "0x3C10B20", Offset = "0x3C10B20", VA = "0x3C10B20")]
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
			[Token(Token = "0x600037A")]
			[Address(RVA = "0x3C10B50", Offset = "0x3C10B50", VA = "0x3C10B50")]
			get
			{
				return default(DateTime);
			}
		}

		[Token(Token = "0x1700004E")]
		public int Month
		{
			[Token(Token = "0x600037B")]
			[Address(RVA = "0x3C10B60", Offset = "0x3C10B60", VA = "0x3C10B60")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x1700004F")]
		public int Week
		{
			[Token(Token = "0x600037C")]
			[Address(RVA = "0x3C10B70", Offset = "0x3C10B70", VA = "0x3C10B70")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x17000050")]
		public int Day
		{
			[Token(Token = "0x600037D")]
			[Address(RVA = "0x3C10B80", Offset = "0x3C10B80", VA = "0x3C10B80")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x17000051")]
		public DayOfWeek DayOfWeek
		{
			[Token(Token = "0x600037E")]
			[Address(RVA = "0x3C10B90", Offset = "0x3C10B90", VA = "0x3C10B90")]
			get
			{
				return default(DayOfWeek);
			}
		}

		[Token(Token = "0x17000052")]
		public bool IsFixedDateRule
		{
			[Token(Token = "0x600037F")]
			[Address(RVA = "0x3C10BA0", Offset = "0x3C10BA0", VA = "0x3C10BA0")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6000380")]
		[Address(RVA = "0x3C10BB0", Offset = "0x3C10BB0", VA = "0x3C10BB0", Slot = "0")]
		public override bool Equals(object obj)
		{
			return default(bool);
		}

		[Token(Token = "0x6000381")]
		[Address(RVA = "0x3C0FB70", Offset = "0x3C0FB70", VA = "0x3C0FB70")]
		public static bool operator !=(TransitionTime t1, TransitionTime t2)
		{
			return default(bool);
		}

		[Token(Token = "0x6000382")]
		[Address(RVA = "0x3C0FC50", Offset = "0x3C0FC50", VA = "0x3C0FC50", Slot = "4")]
		public bool Equals(TransitionTime other)
		{
			return default(bool);
		}

		[Token(Token = "0x6000383")]
		[Address(RVA = "0x3C10CC0", Offset = "0x3C10CC0", VA = "0x3C10CC0", Slot = "2")]
		public override int GetHashCode()
		{
			return default(int);
		}

		[Token(Token = "0x6000384")]
		[Address(RVA = "0x3C10CD0", Offset = "0x3C10CD0", VA = "0x3C10CD0")]
		private TransitionTime(DateTime timeOfDay, int month, int week, int day, DayOfWeek dayOfWeek, bool isFixedDateRule)
		{
		}

		[Token(Token = "0x6000385")]
		[Address(RVA = "0x3C07A80", Offset = "0x3C07A80", VA = "0x3C07A80")]
		public static TransitionTime CreateFixedDateRule(DateTime timeOfDay, int month, int day)
		{
			return default(TransitionTime);
		}

		[Token(Token = "0x6000386")]
		[Address(RVA = "0x3C08C30", Offset = "0x3C08C30", VA = "0x3C08C30")]
		public static TransitionTime CreateFloatingDateRule(DateTime timeOfDay, int month, int week, DayOfWeek dayOfWeek)
		{
			return default(TransitionTime);
		}

		[Token(Token = "0x6000387")]
		[Address(RVA = "0x3C10D30", Offset = "0x3C10D30", VA = "0x3C10D30")]
		private static void ValidateTransitionTime(DateTime timeOfDay, int month, int week, int day, DayOfWeek dayOfWeek)
		{
		}

		[Token(Token = "0x6000388")]
		[Address(RVA = "0x3C10FC0", Offset = "0x3C10FC0", VA = "0x3C10FC0", Slot = "6")]
		private void System_002ERuntime_002ESerialization_002EIDeserializationCallback_002EOnDeserialization(object sender)
		{
		}

		[Token(Token = "0x6000389")]
		[Address(RVA = "0x3C110B0", Offset = "0x3C110B0", VA = "0x3C110B0", Slot = "5")]
		private void System_002ERuntime_002ESerialization_002EISerializable_002EGetObjectData(SerializationInfo info, StreamingContext context)
		{
		}

		[Token(Token = "0x600038A")]
		[Address(RVA = "0x3C11230", Offset = "0x3C11230", VA = "0x3C11230")]
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
			[Token(Token = "0x600038C")]
			[Address(RVA = "0x3C0A2B0", Offset = "0x3C0A2B0", VA = "0x3C0A2B0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600038B")]
		[Address(RVA = "0x3C11550", Offset = "0x3C11550", VA = "0x3C11550")]
		private TimeZoneInfo CreateLocal()
		{
			return null;
		}

		[Token(Token = "0x600038D")]
		[Address(RVA = "0x3C0A350", Offset = "0x3C0A350", VA = "0x3C0A350")]
		public DateTimeKind GetCorrespondingKind(TimeZoneInfo timeZone)
		{
			return default(DateTimeKind);
		}

		[Token(Token = "0x600038E")]
		[Address(RVA = "0x3C0FAA0", Offset = "0x3C0FAA0", VA = "0x3C0FAA0")]
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
		[Token(Token = "0x600032D")]
		[Address(RVA = "0x3C09B90", Offset = "0x3C09B90", VA = "0x3C09B90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000040")]
	public string StandardName
	{
		[Token(Token = "0x600032E")]
		[Address(RVA = "0x3C09BC0", Offset = "0x3C09BC0", VA = "0x3C09BC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000041")]
	public string DaylightName
	{
		[Token(Token = "0x600032F")]
		[Address(RVA = "0x3C09BF0", Offset = "0x3C09BF0", VA = "0x3C09BF0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000042")]
	public TimeSpan BaseUtcOffset
	{
		[Token(Token = "0x6000330")]
		[Address(RVA = "0x3C09C20", Offset = "0x3C09C20", VA = "0x3C09C20")]
		get
		{
			return default(TimeSpan);
		}
	}

	[Token(Token = "0x17000043")]
	public static TimeZoneInfo Local
	{
		[Token(Token = "0x600033D")]
		[Address(RVA = "0x3C063A0", Offset = "0x3C063A0", VA = "0x3C063A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000044")]
	public static TimeZoneInfo Utc
	{
		[Token(Token = "0x600033F")]
		[Address(RVA = "0x3C0C3E0", Offset = "0x3C0C3E0", VA = "0x3C0C3E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000308")]
	[Address(RVA = "0x3C03000", Offset = "0x3C03000", VA = "0x3C03000")]
	private TimeZoneInfo(byte[] data, string id, bool dstDisabled)
	{
	}

	[Token(Token = "0x6000309")]
	[Address(RVA = "0x3C04210", Offset = "0x3C04210", VA = "0x3C04210")]
	private static TimeZoneInfo GetLocalTimeZone(CachedData cachedData)
	{
		return null;
	}

	[Token(Token = "0x600030A")]
	[Address(RVA = "0x3C04410", Offset = "0x3C04410", VA = "0x3C04410")]
	private static bool TryGetLocalTzFile(out byte[] rawData, out string id)
	{
		return default(bool);
	}

	[Token(Token = "0x600030B")]
	[Address(RVA = "0x3C04650", Offset = "0x3C04650", VA = "0x3C04650")]
	private static string GetTzEnvironmentVariable()
	{
		return null;
	}

	[Token(Token = "0x600030C")]
	[Address(RVA = "0x3C046C0", Offset = "0x3C046C0", VA = "0x3C046C0")]
	private static bool TryLoadTzFile(string tzFilePath, ref byte[] rawData, ref string id)
	{
		return default(bool);
	}

	[Token(Token = "0x600030D")]
	[Address(RVA = "0x3C04A30", Offset = "0x3C04A30", VA = "0x3C04A30")]
	private static string FindTimeZoneIdUsingReadLink(string tzFilePath)
	{
		return null;
	}

	[Token(Token = "0x600030E")]
	[Address(RVA = "0x3C04DD0", Offset = "0x3C04DD0", VA = "0x3C04DD0")]
	private static string GetDirectoryEntryFullPath(ref global::Interop.Sys.DirectoryEntry dirent, string currentPath)
	{
		return null;
	}

	[Token(Token = "0x600030F")]
	[Address(RVA = "0x3C04F00", Offset = "0x3C04F00", VA = "0x3C04F00")]
	private static void EnumerateFilesRecursively(string path, Predicate<string> condition)
	{
	}

	[Token(Token = "0x6000310")]
	[Address(RVA = "0x3C04B20", Offset = "0x3C04B20", VA = "0x3C04B20")]
	private static string FindTimeZoneId(byte[] rawData)
	{
		return null;
	}

	[Token(Token = "0x6000311")]
	[Address(RVA = "0x3C05700", Offset = "0x3C05700", VA = "0x3C05700")]
	private static bool CompareTimeZoneFile(string filePath, byte[] buffer, byte[] rawData)
	{
		return default(bool);
	}

	[Token(Token = "0x6000312")]
	[Address(RVA = "0x3C04260", Offset = "0x3C04260", VA = "0x3C04260")]
	private static TimeZoneInfo GetLocalTimeZoneFromTzFile()
	{
		return null;
	}

	[Token(Token = "0x6000313")]
	[Address(RVA = "0x3C05AF0", Offset = "0x3C05AF0", VA = "0x3C05AF0")]
	private static TimeZoneInfo GetTimeZoneFromTzData(byte[] rawData, string id)
	{
		return null;
	}

	[Token(Token = "0x6000314")]
	[Address(RVA = "0x3C048B0", Offset = "0x3C048B0", VA = "0x3C048B0")]
	private static string GetTimeZoneDirectory()
	{
		return null;
	}

	[Token(Token = "0x6000315")]
	[Address(RVA = "0x3C062B0", Offset = "0x3C062B0", VA = "0x3C062B0")]
	internal static TimeSpan GetDateTimeNowUtcOffsetFromUtc(DateTime time, out bool isAmbiguousLocalDst)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x6000316")]
	[Address(RVA = "0x3C03CD0", Offset = "0x3C03CD0", VA = "0x3C03CD0")]
	private static void TZif_GenerateAdjustmentRules(out AdjustmentRule[] rules, TimeSpan baseUtcOffset, DateTime[] dts, byte[] typeOfLocalTime, TZifType[] transitionType, bool[] StandardTime, bool[] GmtTime, string futureTransitionsPosixFormat)
	{
	}

	[Token(Token = "0x6000317")]
	[Address(RVA = "0x3C06750", Offset = "0x3C06750", VA = "0x3C06750")]
	private static void TZif_GenerateAdjustmentRule(ref int index, TimeSpan timeZoneBaseUtcOffset, List<AdjustmentRule> rulesList, DateTime[] dts, byte[] typeOfLocalTime, TZifType[] transitionTypes, bool[] StandardTime, bool[] GmtTime, string futureTransitionsPosixFormat)
	{
	}

	[Token(Token = "0x6000318")]
	[Address(RVA = "0x3C074D0", Offset = "0x3C074D0", VA = "0x3C074D0")]
	private static TimeSpan TZif_CalculateTransitionOffsetFromBase(TimeSpan transitionOffset, TimeSpan timeZoneBaseUtcOffset)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x6000319")]
	[Address(RVA = "0x3C07420", Offset = "0x3C07420", VA = "0x3C07420")]
	private static TZifType TZif_GetEarlyDateTransitionType(TZifType[] transitionTypes)
	{
		return default(TZifType);
	}

	[Token(Token = "0x600031A")]
	[Address(RVA = "0x3C07AE0", Offset = "0x3C07AE0", VA = "0x3C07AE0")]
	private static AdjustmentRule TZif_CreateAdjustmentRuleForPosixFormat(string posixFormat, DateTime startTransitionDate, TimeSpan timeZoneBaseUtcOffset)
	{
		return null;
	}

	[Token(Token = "0x600031B")]
	[Address(RVA = "0x3C08370", Offset = "0x3C08370", VA = "0x3C08370")]
	private static TimeSpan? TZif_ParseOffsetString(string offset)
	{
		return null;
	}

	[Token(Token = "0x600031C")]
	[Address(RVA = "0x3C087E0", Offset = "0x3C087E0", VA = "0x3C087E0")]
	private static DateTime ParseTimeOfDay(string time)
	{
		return default(DateTime);
	}

	[Token(Token = "0x600031D")]
	[Address(RVA = "0x3C08580", Offset = "0x3C08580", VA = "0x3C08580")]
	private static TransitionTime TZif_CreateTransitionTimeFromPosixRule(string date, string time)
	{
		return default(TransitionTime);
	}

	[Token(Token = "0x600031E")]
	[Address(RVA = "0x3C08C90", Offset = "0x3C08C90", VA = "0x3C08C90")]
	private static void TZif_ParseJulianDay(string date, out int month, out int day)
	{
	}

	[Token(Token = "0x600031F")]
	[Address(RVA = "0x3C08A50", Offset = "0x3C08A50", VA = "0x3C08A50")]
	private static bool TZif_ParseMDateRule(string dateRule, out int month, out int week, out DayOfWeek dayOfWeek)
	{
		return default(bool);
	}

	[Token(Token = "0x6000320")]
	[Address(RVA = "0x3C080F0", Offset = "0x3C080F0", VA = "0x3C080F0")]
	private static bool TZif_ParsePosixFormat(string posixFormat, out string standardName, out string standardOffset, out string daylightSavingsName, out string daylightSavingsOffset, out string start, out string startTime, out string end, out string endTime)
	{
		return default(bool);
	}

	[Token(Token = "0x6000321")]
	[Address(RVA = "0x3C08E50", Offset = "0x3C08E50", VA = "0x3C08E50")]
	private static string TZif_ParsePosixName(string posixFormat, ref int index)
	{
		return null;
	}

	[Token(Token = "0x6000322")]
	[Address(RVA = "0x3C090F0", Offset = "0x3C090F0", VA = "0x3C090F0")]
	private static string TZif_ParsePosixOffset(string posixFormat, ref int index)
	{
		return null;
	}

	[Token(Token = "0x6000323")]
	[Address(RVA = "0x3C09250", Offset = "0x3C09250", VA = "0x3C09250")]
	private static void TZif_ParsePosixDateTime(string posixFormat, ref int index, out string date, out string time)
	{
	}

	[Token(Token = "0x6000324")]
	[Address(RVA = "0x3C093C0", Offset = "0x3C093C0", VA = "0x3C093C0")]
	private static string TZif_ParsePosixDate(string posixFormat, ref int index)
	{
		return null;
	}

	[Token(Token = "0x6000325")]
	[Address(RVA = "0x3C09520", Offset = "0x3C09520", VA = "0x3C09520")]
	private static string TZif_ParsePosixTime(string posixFormat, ref int index)
	{
		return null;
	}

	[Token(Token = "0x6000326")]
	[Address(RVA = "0x3C09330", Offset = "0x3C09330", VA = "0x3C09330")]
	private static string TZif_ParsePosixString(string posixFormat, ref int index, Func<char, bool> breakCondition)
	{
		return null;
	}

	[Token(Token = "0x6000327")]
	[Address(RVA = "0x3C03C80", Offset = "0x3C03C80", VA = "0x3C03C80")]
	private static string TZif_GetZoneAbbreviation(string zoneAbbreviations, int index)
	{
		return null;
	}

	[Token(Token = "0x6000328")]
	[Address(RVA = "0x3C09680", Offset = "0x3C09680", VA = "0x3C09680")]
	private static int TZif_ToInt32(byte[] value, int startIndex)
	{
		return default(int);
	}

	[Token(Token = "0x6000329")]
	[Address(RVA = "0x3C096A0", Offset = "0x3C096A0", VA = "0x3C096A0")]
	private static long TZif_ToInt64(byte[] value, int startIndex)
	{
		return default(long);
	}

	[Token(Token = "0x600032A")]
	[Address(RVA = "0x3C096D0", Offset = "0x3C096D0", VA = "0x3C096D0")]
	private static long TZif_ToUnixTime(byte[] value, int startIndex, TZVersion version)
	{
		return default(long);
	}

	[Token(Token = "0x600032B")]
	[Address(RVA = "0x3C097A0", Offset = "0x3C097A0", VA = "0x3C097A0")]
	private static DateTime TZif_UnixTimeToDateTime(long unixTime)
	{
		return default(DateTime);
	}

	[Token(Token = "0x600032C")]
	[Address(RVA = "0x3C03640", Offset = "0x3C03640", VA = "0x3C03640")]
	private static void TZif_ParseRaw(byte[] data, out TZifHead t, out DateTime[] dts, out byte[] typeOfLocalTime, out TZifType[] transitionType, out string zoneAbbreviations, out bool[] StandardTime, out bool[] GmtTime, out string futureTransitionsPosixFormat)
	{
	}

	[Token(Token = "0x6000331")]
	[Address(RVA = "0x3C09C30", Offset = "0x3C09C30", VA = "0x3C09C30")]
	private AdjustmentRule GetPreviousAdjustmentRule(AdjustmentRule rule, int? ruleIndex)
	{
		return null;
	}

	[Token(Token = "0x6000332")]
	[Address(RVA = "0x3C09D20", Offset = "0x3C09D20", VA = "0x3C09D20")]
	public TimeSpan GetUtcOffset(DateTime dateTime)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x6000333")]
	[Address(RVA = "0x3C0A1F0", Offset = "0x3C0A1F0", VA = "0x3C0A1F0")]
	internal static TimeSpan GetLocalUtcOffset(DateTime dateTime, System.TimeZoneInfoOptions flags)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x6000334")]
	[Address(RVA = "0x3C0A2E0", Offset = "0x3C0A2E0", VA = "0x3C0A2E0")]
	internal TimeSpan GetUtcOffset(DateTime dateTime, System.TimeZoneInfoOptions flags)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x6000335")]
	[Address(RVA = "0x3C09D80", Offset = "0x3C09D80", VA = "0x3C09D80")]
	private TimeSpan GetUtcOffset(DateTime dateTime, System.TimeZoneInfoOptions flags, CachedData cachedData)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x6000336")]
	[Address(RVA = "0x3C0A3F0", Offset = "0x3C0A3F0", VA = "0x3C0A3F0")]
	internal static DateTime ConvertTime(DateTime dateTime, TimeZoneInfo sourceTimeZone, TimeZoneInfo destinationTimeZone, System.TimeZoneInfoOptions flags)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000337")]
	[Address(RVA = "0x3C0A700", Offset = "0x3C0A700", VA = "0x3C0A700")]
	private static DateTime ConvertTime(DateTime dateTime, TimeZoneInfo sourceTimeZone, TimeZoneInfo destinationTimeZone, System.TimeZoneInfoOptions flags, CachedData cachedData)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000338")]
	[Address(RVA = "0x3C0BD20", Offset = "0x3C0BD20", VA = "0x3C0BD20")]
	internal static DateTime ConvertTimeToUtc(DateTime dateTime, System.TimeZoneInfoOptions flags)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000339")]
	[Address(RVA = "0x3C0BE10", Offset = "0x3C0BE10", VA = "0x3C0BE10", Slot = "4")]
	public bool Equals(TimeZoneInfo other)
	{
		return default(bool);
	}

	[Token(Token = "0x600033A")]
	[Address(RVA = "0x3C0BFA0", Offset = "0x3C0BFA0", VA = "0x3C0BFA0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600033B")]
	[Address(RVA = "0x3C0C010", Offset = "0x3C0C010", VA = "0x3C0C010", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600033C")]
	[Address(RVA = "0x3C0BE50", Offset = "0x3C0BE50", VA = "0x3C0BE50")]
	public bool HasSameRules(TimeZoneInfo other)
	{
		return default(bool);
	}

	[Token(Token = "0x600033E")]
	[Address(RVA = "0x3C0C3B0", Offset = "0x3C0C3B0", VA = "0x3C0C3B0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000340")]
	[Address(RVA = "0x3C0C450", Offset = "0x3C0C450", VA = "0x3C0C450")]
	private TimeZoneInfo(string id, TimeSpan baseUtcOffset, string displayName, string standardDisplayName, string daylightDisplayName, AdjustmentRule[] adjustmentRules, bool disableDaylightSavingTime)
	{
	}

	[Token(Token = "0x6000341")]
	[Address(RVA = "0x3C0C570", Offset = "0x3C0C570", VA = "0x3C0C570")]
	public static TimeZoneInfo CreateCustomTimeZone(string id, TimeSpan baseUtcOffset, string displayName, string standardDisplayName)
	{
		return null;
	}

	[Token(Token = "0x6000342")]
	[Address(RVA = "0x3C0C5F0", Offset = "0x3C0C5F0", VA = "0x3C0C5F0")]
	public static TimeZoneInfo CreateCustomTimeZone(string id, TimeSpan baseUtcOffset, string displayName, string standardDisplayName, string daylightDisplayName, AdjustmentRule[] adjustmentRules, bool disableDaylightSavingTime)
	{
		return null;
	}

	[Token(Token = "0x6000343")]
	[Address(RVA = "0x3C0C6F0", Offset = "0x3C0C6F0", VA = "0x3C0C6F0", Slot = "6")]
	private void System_002ERuntime_002ESerialization_002EIDeserializationCallback_002EOnDeserialization(object sender)
	{
	}

	[Token(Token = "0x6000344")]
	[Address(RVA = "0x3C0C8D0", Offset = "0x3C0C8D0", VA = "0x3C0C8D0", Slot = "5")]
	private void System_002ERuntime_002ESerialization_002EISerializable_002EGetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000345")]
	[Address(RVA = "0x3C0CA70", Offset = "0x3C0CA70", VA = "0x3C0CA70")]
	private TimeZoneInfo(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000346")]
	[Address(RVA = "0x3C0AE00", Offset = "0x3C0AE00", VA = "0x3C0AE00")]
	private AdjustmentRule GetAdjustmentRuleForTime(DateTime dateTime, out int? ruleIndex)
	{
		return null;
	}

	[Token(Token = "0x6000347")]
	[Address(RVA = "0x3C0CE80", Offset = "0x3C0CE80", VA = "0x3C0CE80")]
	private AdjustmentRule GetAdjustmentRuleForTime(DateTime dateTime, bool dateTimeisUtc, out int? ruleIndex)
	{
		return null;
	}

	[Token(Token = "0x6000348")]
	[Address(RVA = "0x3C0D060", Offset = "0x3C0D060", VA = "0x3C0D060")]
	private int CompareAdjustmentRuleToDateTime(AdjustmentRule rule, AdjustmentRule previousRule, DateTime dateTime, DateTime dateOnly, bool dateTimeisUtc)
	{
		return default(int);
	}

	[Token(Token = "0x6000349")]
	[Address(RVA = "0x3C0D210", Offset = "0x3C0D210", VA = "0x3C0D210")]
	private DateTime ConvertToUtc(DateTime dateTime, TimeSpan daylightDelta, TimeSpan baseUtcOffsetDelta)
	{
		return default(DateTime);
	}

	[Token(Token = "0x600034A")]
	[Address(RVA = "0x3C0D3C0", Offset = "0x3C0D3C0", VA = "0x3C0D3C0")]
	private DateTime ConvertFromUtc(DateTime dateTime, TimeSpan daylightDelta, TimeSpan baseUtcOffsetDelta)
	{
		return default(DateTime);
	}

	[Token(Token = "0x600034B")]
	[Address(RVA = "0x3C0D220", Offset = "0x3C0D220", VA = "0x3C0D220")]
	private DateTime ConvertToFromUtc(DateTime dateTime, TimeSpan daylightDelta, TimeSpan baseUtcOffsetDelta, bool convertToUtc)
	{
		return default(DateTime);
	}

	[Token(Token = "0x600034C")]
	[Address(RVA = "0x3C0BA40", Offset = "0x3C0BA40", VA = "0x3C0BA40")]
	private static DateTime ConvertUtcToTimeZone(long ticks, TimeZoneInfo destinationTimeZone, out bool isAmbiguousLocalDst)
	{
		return default(DateTime);
	}

	[Token(Token = "0x600034D")]
	[Address(RVA = "0x3C0B020", Offset = "0x3C0B020", VA = "0x3C0B020")]
	private System.Globalization.DaylightTimeStruct GetDaylightTime(int year, AdjustmentRule rule, int? ruleIndex)
	{
		return default(System.Globalization.DaylightTimeStruct);
	}

	[Token(Token = "0x600034E")]
	[Address(RVA = "0x3C0B5C0", Offset = "0x3C0B5C0", VA = "0x3C0B5C0")]
	private static bool GetIsDaylightSavings(DateTime time, AdjustmentRule rule, System.Globalization.DaylightTimeStruct daylightTime, System.TimeZoneInfoOptions flags)
	{
		return default(bool);
	}

	[Token(Token = "0x600034F")]
	[Address(RVA = "0x3C0DFE0", Offset = "0x3C0DFE0", VA = "0x3C0DFE0")]
	private TimeSpan GetDaylightSavingsStartOffsetFromUtc(TimeSpan baseUtcOffset, AdjustmentRule rule, int? ruleIndex)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x6000350")]
	[Address(RVA = "0x3C0E0A0", Offset = "0x3C0E0A0", VA = "0x3C0E0A0")]
	private TimeSpan GetDaylightSavingsEndOffsetFromUtc(TimeSpan baseUtcOffset, AdjustmentRule rule)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x6000351")]
	[Address(RVA = "0x3C0E110", Offset = "0x3C0E110", VA = "0x3C0E110")]
	private static bool GetIsDaylightSavingsFromUtc(DateTime time, int year, TimeSpan utc, AdjustmentRule rule, int? ruleIndex, out bool isAmbiguousLocalDst, TimeZoneInfo zone)
	{
		return default(bool);
	}

	[Token(Token = "0x6000352")]
	[Address(RVA = "0x3C0D960", Offset = "0x3C0D960", VA = "0x3C0D960")]
	private static bool CheckIsDst(DateTime startTime, DateTime time, DateTime endTime, bool ignoreYearAdjustment, AdjustmentRule rule)
	{
		return default(bool);
	}

	[Token(Token = "0x6000353")]
	[Address(RVA = "0x3C0DB90", Offset = "0x3C0DB90", VA = "0x3C0DB90")]
	private static bool GetIsAmbiguousTime(DateTime time, AdjustmentRule rule, System.Globalization.DaylightTimeStruct daylightTime)
	{
		return default(bool);
	}

	[Token(Token = "0x6000354")]
	[Address(RVA = "0x3C0B160", Offset = "0x3C0B160", VA = "0x3C0B160")]
	private static bool GetIsInvalidTime(DateTime time, AdjustmentRule rule, System.Globalization.DaylightTimeStruct daylightTime)
	{
		return default(bool);
	}

	[Token(Token = "0x6000355")]
	[Address(RVA = "0x3C0A530", Offset = "0x3C0A530", VA = "0x3C0A530")]
	private static TimeSpan GetUtcOffset(DateTime time, TimeZoneInfo zone, System.TimeZoneInfoOptions flags)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x6000356")]
	[Address(RVA = "0x3C0A470", Offset = "0x3C0A470", VA = "0x3C0A470")]
	private static TimeSpan GetUtcOffsetFromUtc(DateTime time, TimeZoneInfo zone)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x6000357")]
	[Address(RVA = "0x3C0D3D0", Offset = "0x3C0D3D0", VA = "0x3C0D3D0")]
	private static TimeSpan GetUtcOffsetFromUtc(DateTime time, TimeZoneInfo zone, out bool isDaylightSavings)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x6000358")]
	[Address(RVA = "0x3C06440", Offset = "0x3C06440", VA = "0x3C06440")]
	internal static TimeSpan GetUtcOffsetFromUtc(DateTime time, TimeZoneInfo zone, out bool isDaylightSavings, out bool isAmbiguousLocalDst)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x6000359")]
	[Address(RVA = "0x3C0D440", Offset = "0x3C0D440", VA = "0x3C0D440")]
	internal static DateTime TransitionTimeToDateTime(int year, TransitionTime transitionTime)
	{
		return default(DateTime);
	}

	[Token(Token = "0x600035A")]
	[Address(RVA = "0x3C03E60", Offset = "0x3C03E60", VA = "0x3C03E60")]
	private static void ValidateTimeZoneInfo(string id, TimeSpan baseUtcOffset, AdjustmentRule[] adjustmentRules, out bool adjustmentRulesSupportDst)
	{
	}

	[Token(Token = "0x600035B")]
	[Address(RVA = "0x3C0EA70", Offset = "0x3C0EA70", VA = "0x3C0EA70")]
	internal static bool UtcOffsetOutOfRange(TimeSpan offset)
	{
		return default(bool);
	}

	[Token(Token = "0x600035C")]
	[Address(RVA = "0x3C0EB90", Offset = "0x3C0EB90", VA = "0x3C0EB90")]
	private static TimeSpan GetUtcOffset(TimeSpan baseUtcOffset, AdjustmentRule adjustmentRule)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x600035D")]
	[Address(RVA = "0x3C076D0", Offset = "0x3C076D0", VA = "0x3C076D0")]
	private static bool IsValidAdjustmentRuleOffest(TimeSpan baseUtcOffset, AdjustmentRule adjustmentRule)
	{
		return default(bool);
	}

	[Token(Token = "0x600035E")]
	[Address(RVA = "0x3C07730", Offset = "0x3C07730", VA = "0x3C07730")]
	private static void NormalizeAdjustmentRuleOffset(TimeSpan baseUtcOffset, ref AdjustmentRule adjustmentRule)
	{
	}

	[Token(Token = "0x600035F")]
	[Address(RVA = "0x3C0EC80", Offset = "0x3C0EC80", VA = "0x3C0EC80")]
	private static string GetTimeZoneDirectoryUnity()
	{
		return null;
	}

	[Token(Token = "0x6000360")]
	[Address(RVA = "0x3C0ECA0", Offset = "0x3C0ECA0", VA = "0x3C0ECA0")]
	private static List<AdjustmentRule> CreateAdjustmentRule(int year, out long[] data, out string[] names)
	{
		return null;
	}

	[Token(Token = "0x6000361")]
	[Address(RVA = "0x3C05CB0", Offset = "0x3C05CB0", VA = "0x3C05CB0")]
	private static TimeZoneInfo CreateLocalUnity()
	{
		return null;
	}

	[Token(Token = "0x6000363")]
	[Address(RVA = "0x3C0FAB0", Offset = "0x3C0FAB0", VA = "0x3C0FAB0")]
	internal TimeZoneInfo()
	{
	}
}
