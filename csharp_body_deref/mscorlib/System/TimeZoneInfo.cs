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
		[Address(RVA = "0x4F23F40", Offset = "0x4F23F40", VA = "0x4F23F40")]
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
		[Address(RVA = "0x4F23D70", Offset = "0x4F23D70", VA = "0x4F23D70")]
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
			[Address(RVA = "0x4F29FC0", Offset = "0x4F29FC0", VA = "0x4F29FC0")]
			get
			{
				return default(DateTime);
			}
		}

		[Token(Token = "0x17000046")]
		public DateTime DateEnd
		{
			[Token(Token = "0x6000367")]
			[Address(RVA = "0x4F29FD0", Offset = "0x4F29FD0", VA = "0x4F29FD0")]
			get
			{
				return default(DateTime);
			}
		}

		[Token(Token = "0x17000047")]
		public TimeSpan DaylightDelta
		{
			[Token(Token = "0x6000368")]
			[Address(RVA = "0x4F29FE0", Offset = "0x4F29FE0", VA = "0x4F29FE0")]
			get
			{
				return default(TimeSpan);
			}
		}

		[Token(Token = "0x17000048")]
		public TransitionTime DaylightTransitionStart
		{
			[Token(Token = "0x6000369")]
			[Address(RVA = "0x4F29FF0", Offset = "0x4F29FF0", VA = "0x4F29FF0")]
			get
			{
				return default(TransitionTime);
			}
		}

		[Token(Token = "0x17000049")]
		public TransitionTime DaylightTransitionEnd
		{
			[Token(Token = "0x600036A")]
			[Address(RVA = "0x4F2A010", Offset = "0x4F2A010", VA = "0x4F2A010")]
			get
			{
				return default(TransitionTime);
			}
		}

		[Token(Token = "0x1700004A")]
		internal TimeSpan BaseUtcOffsetDelta
		{
			[Token(Token = "0x600036B")]
			[Address(RVA = "0x4F2A030", Offset = "0x4F2A030", VA = "0x4F2A030")]
			get
			{
				return default(TimeSpan);
			}
		}

		[Token(Token = "0x1700004B")]
		internal bool NoDaylightTransitions
		{
			[Token(Token = "0x600036C")]
			[Address(RVA = "0x4F2A040", Offset = "0x4F2A040", VA = "0x4F2A040")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x1700004C")]
		internal bool HasDaylightSaving
		{
			[Token(Token = "0x600036D")]
			[Address(RVA = "0x4F252F0", Offset = "0x4F252F0", VA = "0x4F252F0")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x600036E")]
		[Address(RVA = "0x4F265E0", Offset = "0x4F265E0", VA = "0x4F265E0", Slot = "4")]
		public bool Equals(AdjustmentRule other)
		{
			return default(bool);
		}

		[Token(Token = "0x600036F")]
		[Address(RVA = "0x4F2A1F0", Offset = "0x4F2A1F0", VA = "0x4F2A1F0", Slot = "2")]
		public override int GetHashCode()
		{
			return default(int);
		}

		[Token(Token = "0x6000370")]
		[Address(RVA = "0x4F2A250", Offset = "0x4F2A250", VA = "0x4F2A250")]
		private AdjustmentRule(DateTime dateStart, DateTime dateEnd, TimeSpan daylightDelta, TransitionTime daylightTransitionStart, TransitionTime daylightTransitionEnd, TimeSpan baseUtcOffsetDelta, bool noDaylightTransitions)
		{
		}

		[Token(Token = "0x6000371")]
		[Address(RVA = "0x4F29C10", Offset = "0x4F29C10", VA = "0x4F29C10")]
		public static AdjustmentRule CreateAdjustmentRule(DateTime dateStart, DateTime dateEnd, TimeSpan daylightDelta, TransitionTime daylightTransitionStart, TransitionTime daylightTransitionEnd)
		{
			return null;
		}

		[Token(Token = "0x6000372")]
		[Address(RVA = "0x4F21A90", Offset = "0x4F21A90", VA = "0x4F21A90")]
		internal static AdjustmentRule CreateAdjustmentRule(DateTime dateStart, DateTime dateEnd, TimeSpan daylightDelta, TransitionTime daylightTransitionStart, TransitionTime daylightTransitionEnd, TimeSpan baseUtcOffsetDelta, bool noDaylightTransitions)
		{
			return null;
		}

		[Token(Token = "0x6000373")]
		[Address(RVA = "0x4F27BE0", Offset = "0x4F27BE0", VA = "0x4F27BE0")]
		internal bool IsStartDateMarkerForBeginningOfYear()
		{
			return default(bool);
		}

		[Token(Token = "0x6000374")]
		[Address(RVA = "0x4F27D10", Offset = "0x4F27D10", VA = "0x4F27D10")]
		internal bool IsEndDateMarkerForEndOfYear()
		{
			return default(bool);
		}

		[Token(Token = "0x6000375")]
		[Address(RVA = "0x4F2A310", Offset = "0x4F2A310", VA = "0x4F2A310")]
		private static void ValidateAdjustmentRule(DateTime dateStart, DateTime dateEnd, TimeSpan daylightDelta, TransitionTime daylightTransitionStart, TransitionTime daylightTransitionEnd, bool noDaylightTransitions)
		{
		}

		[Token(Token = "0x6000376")]
		[Address(RVA = "0x4F2A910", Offset = "0x4F2A910", VA = "0x4F2A910", Slot = "6")]
		private void System_002ERuntime_002ESerialization_002EIDeserializationCallback_002EOnDeserialization(object sender)
		{
		}

		[Token(Token = "0x6000377")]
		[Address(RVA = "0x4F2AA20", Offset = "0x4F2AA20", VA = "0x4F2AA20", Slot = "5")]
		private void System_002ERuntime_002ESerialization_002EISerializable_002EGetObjectData(SerializationInfo info, StreamingContext context)
		{
		}

		[Token(Token = "0x6000378")]
		[Address(RVA = "0x4F2AC30", Offset = "0x4F2AC30", VA = "0x4F2AC30")]
		private AdjustmentRule(SerializationInfo info, StreamingContext context)
		{
		}

		[Token(Token = "0x6000379")]
		[Address(RVA = "0x4F2B000", Offset = "0x4F2B000", VA = "0x4F2B000")]
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
			[Address(RVA = "0x4F2B030", Offset = "0x4F2B030", VA = "0x4F2B030")]
			get
			{
				return default(DateTime);
			}
		}

		[Token(Token = "0x1700004E")]
		public int Month
		{
			[Token(Token = "0x600037B")]
			[Address(RVA = "0x4F2B040", Offset = "0x4F2B040", VA = "0x4F2B040")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x1700004F")]
		public int Week
		{
			[Token(Token = "0x600037C")]
			[Address(RVA = "0x4F2B050", Offset = "0x4F2B050", VA = "0x4F2B050")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x17000050")]
		public int Day
		{
			[Token(Token = "0x600037D")]
			[Address(RVA = "0x4F2B060", Offset = "0x4F2B060", VA = "0x4F2B060")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x17000051")]
		public DayOfWeek DayOfWeek
		{
			[Token(Token = "0x600037E")]
			[Address(RVA = "0x4F2B070", Offset = "0x4F2B070", VA = "0x4F2B070")]
			get
			{
				return default(DayOfWeek);
			}
		}

		[Token(Token = "0x17000052")]
		public bool IsFixedDateRule
		{
			[Token(Token = "0x600037F")]
			[Address(RVA = "0x4F2B080", Offset = "0x4F2B080", VA = "0x4F2B080")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6000380")]
		[Address(RVA = "0x4F2B090", Offset = "0x4F2B090", VA = "0x4F2B090", Slot = "0")]
		public override bool Equals(object obj)
		{
			return default(bool);
		}

		[Token(Token = "0x6000381")]
		[Address(RVA = "0x4F2A050", Offset = "0x4F2A050", VA = "0x4F2A050")]
		public static bool operator !=(TransitionTime t1, TransitionTime t2)
		{
			return default(bool);
		}

		[Token(Token = "0x6000382")]
		[Address(RVA = "0x4F2A130", Offset = "0x4F2A130", VA = "0x4F2A130", Slot = "4")]
		public bool Equals(TransitionTime other)
		{
			return default(bool);
		}

		[Token(Token = "0x6000383")]
		[Address(RVA = "0x4F2B1A0", Offset = "0x4F2B1A0", VA = "0x4F2B1A0", Slot = "2")]
		public override int GetHashCode()
		{
			return default(int);
		}

		[Token(Token = "0x6000384")]
		[Address(RVA = "0x4F2B1B0", Offset = "0x4F2B1B0", VA = "0x4F2B1B0")]
		private TransitionTime(DateTime timeOfDay, int month, int week, int day, DayOfWeek dayOfWeek, bool isFixedDateRule)
		{
		}

		[Token(Token = "0x6000385")]
		[Address(RVA = "0x4F21F60", Offset = "0x4F21F60", VA = "0x4F21F60")]
		public static TransitionTime CreateFixedDateRule(DateTime timeOfDay, int month, int day)
		{
			return default(TransitionTime);
		}

		[Token(Token = "0x6000386")]
		[Address(RVA = "0x4F23110", Offset = "0x4F23110", VA = "0x4F23110")]
		public static TransitionTime CreateFloatingDateRule(DateTime timeOfDay, int month, int week, DayOfWeek dayOfWeek)
		{
			return default(TransitionTime);
		}

		[Token(Token = "0x6000387")]
		[Address(RVA = "0x4F2B210", Offset = "0x4F2B210", VA = "0x4F2B210")]
		private static void ValidateTransitionTime(DateTime timeOfDay, int month, int week, int day, DayOfWeek dayOfWeek)
		{
		}

		[Token(Token = "0x6000388")]
		[Address(RVA = "0x4F2B4A0", Offset = "0x4F2B4A0", VA = "0x4F2B4A0", Slot = "6")]
		private void System_002ERuntime_002ESerialization_002EIDeserializationCallback_002EOnDeserialization(object sender)
		{
		}

		[Token(Token = "0x6000389")]
		[Address(RVA = "0x4F2B590", Offset = "0x4F2B590", VA = "0x4F2B590", Slot = "5")]
		private void System_002ERuntime_002ESerialization_002EISerializable_002EGetObjectData(SerializationInfo info, StreamingContext context)
		{
		}

		[Token(Token = "0x600038A")]
		[Address(RVA = "0x4F2B710", Offset = "0x4F2B710", VA = "0x4F2B710")]
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
			[Address(RVA = "0x4F24790", Offset = "0x4F24790", VA = "0x4F24790")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600038B")]
		[Address(RVA = "0x4F2BA30", Offset = "0x4F2BA30", VA = "0x4F2BA30")]
		private TimeZoneInfo CreateLocal()
		{
			return null;
		}

		[Token(Token = "0x600038D")]
		[Address(RVA = "0x4F24830", Offset = "0x4F24830", VA = "0x4F24830")]
		public DateTimeKind GetCorrespondingKind(TimeZoneInfo timeZone)
		{
			return default(DateTimeKind);
		}

		[Token(Token = "0x600038E")]
		[Address(RVA = "0x4F29F80", Offset = "0x4F29F80", VA = "0x4F29F80")]
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
		[Address(RVA = "0x4F24070", Offset = "0x4F24070", VA = "0x4F24070")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000040")]
	public string StandardName
	{
		[Token(Token = "0x600032E")]
		[Address(RVA = "0x4F240A0", Offset = "0x4F240A0", VA = "0x4F240A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000041")]
	public string DaylightName
	{
		[Token(Token = "0x600032F")]
		[Address(RVA = "0x4F240D0", Offset = "0x4F240D0", VA = "0x4F240D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000042")]
	public TimeSpan BaseUtcOffset
	{
		[Token(Token = "0x6000330")]
		[Address(RVA = "0x4F24100", Offset = "0x4F24100", VA = "0x4F24100")]
		get
		{
			return default(TimeSpan);
		}
	}

	[Token(Token = "0x17000043")]
	public static TimeZoneInfo Local
	{
		[Token(Token = "0x600033D")]
		[Address(RVA = "0x4F20880", Offset = "0x4F20880", VA = "0x4F20880")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000044")]
	public static TimeZoneInfo Utc
	{
		[Token(Token = "0x600033F")]
		[Address(RVA = "0x4F268C0", Offset = "0x4F268C0", VA = "0x4F268C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000308")]
	[Address(RVA = "0x4F1D4E0", Offset = "0x4F1D4E0", VA = "0x4F1D4E0")]
	private TimeZoneInfo(byte[] data, string id, bool dstDisabled)
	{
	}

	[Token(Token = "0x6000309")]
	[Address(RVA = "0x4F1E6F0", Offset = "0x4F1E6F0", VA = "0x4F1E6F0")]
	private static TimeZoneInfo GetLocalTimeZone(CachedData cachedData)
	{
		return null;
	}

	[Token(Token = "0x600030A")]
	[Address(RVA = "0x4F1E8F0", Offset = "0x4F1E8F0", VA = "0x4F1E8F0")]
	private static bool TryGetLocalTzFile(out byte[] rawData, out string id)
	{
		return default(bool);
	}

	[Token(Token = "0x600030B")]
	[Address(RVA = "0x4F1EB30", Offset = "0x4F1EB30", VA = "0x4F1EB30")]
	private static string GetTzEnvironmentVariable()
	{
		return null;
	}

	[Token(Token = "0x600030C")]
	[Address(RVA = "0x4F1EBA0", Offset = "0x4F1EBA0", VA = "0x4F1EBA0")]
	private static bool TryLoadTzFile(string tzFilePath, ref byte[] rawData, ref string id)
	{
		return default(bool);
	}

	[Token(Token = "0x600030D")]
	[Address(RVA = "0x4F1EF10", Offset = "0x4F1EF10", VA = "0x4F1EF10")]
	private static string FindTimeZoneIdUsingReadLink(string tzFilePath)
	{
		return null;
	}

	[Token(Token = "0x600030E")]
	[Address(RVA = "0x4F1F2B0", Offset = "0x4F1F2B0", VA = "0x4F1F2B0")]
	private static string GetDirectoryEntryFullPath(ref global::Interop.Sys.DirectoryEntry dirent, string currentPath)
	{
		return null;
	}

	[Token(Token = "0x600030F")]
	[Address(RVA = "0x4F1F3E0", Offset = "0x4F1F3E0", VA = "0x4F1F3E0")]
	private static void EnumerateFilesRecursively(string path, Predicate<string> condition)
	{
	}

	[Token(Token = "0x6000310")]
	[Address(RVA = "0x4F1F000", Offset = "0x4F1F000", VA = "0x4F1F000")]
	private static string FindTimeZoneId(byte[] rawData)
	{
		return null;
	}

	[Token(Token = "0x6000311")]
	[Address(RVA = "0x4F1FBE0", Offset = "0x4F1FBE0", VA = "0x4F1FBE0")]
	private static bool CompareTimeZoneFile(string filePath, byte[] buffer, byte[] rawData)
	{
		return default(bool);
	}

	[Token(Token = "0x6000312")]
	[Address(RVA = "0x4F1E740", Offset = "0x4F1E740", VA = "0x4F1E740")]
	private static TimeZoneInfo GetLocalTimeZoneFromTzFile()
	{
		return null;
	}

	[Token(Token = "0x6000313")]
	[Address(RVA = "0x4F1FFD0", Offset = "0x4F1FFD0", VA = "0x4F1FFD0")]
	private static TimeZoneInfo GetTimeZoneFromTzData(byte[] rawData, string id)
	{
		return null;
	}

	[Token(Token = "0x6000314")]
	[Address(RVA = "0x4F1ED90", Offset = "0x4F1ED90", VA = "0x4F1ED90")]
	private static string GetTimeZoneDirectory()
	{
		return null;
	}

	[Token(Token = "0x6000315")]
	[Address(RVA = "0x4F20790", Offset = "0x4F20790", VA = "0x4F20790")]
	internal static TimeSpan GetDateTimeNowUtcOffsetFromUtc(DateTime time, out bool isAmbiguousLocalDst)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x6000316")]
	[Address(RVA = "0x4F1E1B0", Offset = "0x4F1E1B0", VA = "0x4F1E1B0")]
	private static void TZif_GenerateAdjustmentRules(out AdjustmentRule[] rules, TimeSpan baseUtcOffset, DateTime[] dts, byte[] typeOfLocalTime, TZifType[] transitionType, bool[] StandardTime, bool[] GmtTime, string futureTransitionsPosixFormat)
	{
	}

	[Token(Token = "0x6000317")]
	[Address(RVA = "0x4F20C30", Offset = "0x4F20C30", VA = "0x4F20C30")]
	private static void TZif_GenerateAdjustmentRule(ref int index, TimeSpan timeZoneBaseUtcOffset, List<AdjustmentRule> rulesList, DateTime[] dts, byte[] typeOfLocalTime, TZifType[] transitionTypes, bool[] StandardTime, bool[] GmtTime, string futureTransitionsPosixFormat)
	{
	}

	[Token(Token = "0x6000318")]
	[Address(RVA = "0x4F219B0", Offset = "0x4F219B0", VA = "0x4F219B0")]
	private static TimeSpan TZif_CalculateTransitionOffsetFromBase(TimeSpan transitionOffset, TimeSpan timeZoneBaseUtcOffset)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x6000319")]
	[Address(RVA = "0x4F21900", Offset = "0x4F21900", VA = "0x4F21900")]
	private static TZifType TZif_GetEarlyDateTransitionType(TZifType[] transitionTypes)
	{
		return default(TZifType);
	}

	[Token(Token = "0x600031A")]
	[Address(RVA = "0x4F21FC0", Offset = "0x4F21FC0", VA = "0x4F21FC0")]
	private static AdjustmentRule TZif_CreateAdjustmentRuleForPosixFormat(string posixFormat, DateTime startTransitionDate, TimeSpan timeZoneBaseUtcOffset)
	{
		return null;
	}

	[Token(Token = "0x600031B")]
	[Address(RVA = "0x4F22850", Offset = "0x4F22850", VA = "0x4F22850")]
	private static TimeSpan? TZif_ParseOffsetString(string offset)
	{
		return null;
	}

	[Token(Token = "0x600031C")]
	[Address(RVA = "0x4F22CC0", Offset = "0x4F22CC0", VA = "0x4F22CC0")]
	private static DateTime ParseTimeOfDay(string time)
	{
		return default(DateTime);
	}

	[Token(Token = "0x600031D")]
	[Address(RVA = "0x4F22A60", Offset = "0x4F22A60", VA = "0x4F22A60")]
	private static TransitionTime TZif_CreateTransitionTimeFromPosixRule(string date, string time)
	{
		return default(TransitionTime);
	}

	[Token(Token = "0x600031E")]
	[Address(RVA = "0x4F23170", Offset = "0x4F23170", VA = "0x4F23170")]
	private static void TZif_ParseJulianDay(string date, out int month, out int day)
	{
	}

	[Token(Token = "0x600031F")]
	[Address(RVA = "0x4F22F30", Offset = "0x4F22F30", VA = "0x4F22F30")]
	private static bool TZif_ParseMDateRule(string dateRule, out int month, out int week, out DayOfWeek dayOfWeek)
	{
		return default(bool);
	}

	[Token(Token = "0x6000320")]
	[Address(RVA = "0x4F225D0", Offset = "0x4F225D0", VA = "0x4F225D0")]
	private static bool TZif_ParsePosixFormat(string posixFormat, out string standardName, out string standardOffset, out string daylightSavingsName, out string daylightSavingsOffset, out string start, out string startTime, out string end, out string endTime)
	{
		return default(bool);
	}

	[Token(Token = "0x6000321")]
	[Address(RVA = "0x4F23330", Offset = "0x4F23330", VA = "0x4F23330")]
	private static string TZif_ParsePosixName(string posixFormat, ref int index)
	{
		return null;
	}

	[Token(Token = "0x6000322")]
	[Address(RVA = "0x4F235D0", Offset = "0x4F235D0", VA = "0x4F235D0")]
	private static string TZif_ParsePosixOffset(string posixFormat, ref int index)
	{
		return null;
	}

	[Token(Token = "0x6000323")]
	[Address(RVA = "0x4F23730", Offset = "0x4F23730", VA = "0x4F23730")]
	private static void TZif_ParsePosixDateTime(string posixFormat, ref int index, out string date, out string time)
	{
	}

	[Token(Token = "0x6000324")]
	[Address(RVA = "0x4F238A0", Offset = "0x4F238A0", VA = "0x4F238A0")]
	private static string TZif_ParsePosixDate(string posixFormat, ref int index)
	{
		return null;
	}

	[Token(Token = "0x6000325")]
	[Address(RVA = "0x4F23A00", Offset = "0x4F23A00", VA = "0x4F23A00")]
	private static string TZif_ParsePosixTime(string posixFormat, ref int index)
	{
		return null;
	}

	[Token(Token = "0x6000326")]
	[Address(RVA = "0x4F23810", Offset = "0x4F23810", VA = "0x4F23810")]
	private static string TZif_ParsePosixString(string posixFormat, ref int index, Func<char, bool> breakCondition)
	{
		return null;
	}

	[Token(Token = "0x6000327")]
	[Address(RVA = "0x4F1E160", Offset = "0x4F1E160", VA = "0x4F1E160")]
	private static string TZif_GetZoneAbbreviation(string zoneAbbreviations, int index)
	{
		return null;
	}

	[Token(Token = "0x6000328")]
	[Address(RVA = "0x4F23B60", Offset = "0x4F23B60", VA = "0x4F23B60")]
	private static int TZif_ToInt32(byte[] value, int startIndex)
	{
		return default(int);
	}

	[Token(Token = "0x6000329")]
	[Address(RVA = "0x4F23B80", Offset = "0x4F23B80", VA = "0x4F23B80")]
	private static long TZif_ToInt64(byte[] value, int startIndex)
	{
		return default(long);
	}

	[Token(Token = "0x600032A")]
	[Address(RVA = "0x4F23BB0", Offset = "0x4F23BB0", VA = "0x4F23BB0")]
	private static long TZif_ToUnixTime(byte[] value, int startIndex, TZVersion version)
	{
		return default(long);
	}

	[Token(Token = "0x600032B")]
	[Address(RVA = "0x4F23C80", Offset = "0x4F23C80", VA = "0x4F23C80")]
	private static DateTime TZif_UnixTimeToDateTime(long unixTime)
	{
		return default(DateTime);
	}

	[Token(Token = "0x600032C")]
	[Address(RVA = "0x4F1DB20", Offset = "0x4F1DB20", VA = "0x4F1DB20")]
	private static void TZif_ParseRaw(byte[] data, out TZifHead t, out DateTime[] dts, out byte[] typeOfLocalTime, out TZifType[] transitionType, out string zoneAbbreviations, out bool[] StandardTime, out bool[] GmtTime, out string futureTransitionsPosixFormat)
	{
	}

	[Token(Token = "0x6000331")]
	[Address(RVA = "0x4F24110", Offset = "0x4F24110", VA = "0x4F24110")]
	private AdjustmentRule GetPreviousAdjustmentRule(AdjustmentRule rule, int? ruleIndex)
	{
		return null;
	}

	[Token(Token = "0x6000332")]
	[Address(RVA = "0x4F24200", Offset = "0x4F24200", VA = "0x4F24200")]
	public TimeSpan GetUtcOffset(DateTime dateTime)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x6000333")]
	[Address(RVA = "0x4F246D0", Offset = "0x4F246D0", VA = "0x4F246D0")]
	internal static TimeSpan GetLocalUtcOffset(DateTime dateTime, System.TimeZoneInfoOptions flags)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x6000334")]
	[Address(RVA = "0x4F247C0", Offset = "0x4F247C0", VA = "0x4F247C0")]
	internal TimeSpan GetUtcOffset(DateTime dateTime, System.TimeZoneInfoOptions flags)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x6000335")]
	[Address(RVA = "0x4F24260", Offset = "0x4F24260", VA = "0x4F24260")]
	private TimeSpan GetUtcOffset(DateTime dateTime, System.TimeZoneInfoOptions flags, CachedData cachedData)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x6000336")]
	[Address(RVA = "0x4F248D0", Offset = "0x4F248D0", VA = "0x4F248D0")]
	internal static DateTime ConvertTime(DateTime dateTime, TimeZoneInfo sourceTimeZone, TimeZoneInfo destinationTimeZone, System.TimeZoneInfoOptions flags)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000337")]
	[Address(RVA = "0x4F24BE0", Offset = "0x4F24BE0", VA = "0x4F24BE0")]
	private static DateTime ConvertTime(DateTime dateTime, TimeZoneInfo sourceTimeZone, TimeZoneInfo destinationTimeZone, System.TimeZoneInfoOptions flags, CachedData cachedData)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000338")]
	[Address(RVA = "0x4F26200", Offset = "0x4F26200", VA = "0x4F26200")]
	internal static DateTime ConvertTimeToUtc(DateTime dateTime, System.TimeZoneInfoOptions flags)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000339")]
	[Address(RVA = "0x4F262F0", Offset = "0x4F262F0", VA = "0x4F262F0", Slot = "4")]
	public bool Equals(TimeZoneInfo other)
	{
		return default(bool);
	}

	[Token(Token = "0x600033A")]
	[Address(RVA = "0x4F26480", Offset = "0x4F26480", VA = "0x4F26480", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600033B")]
	[Address(RVA = "0x4F264F0", Offset = "0x4F264F0", VA = "0x4F264F0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600033C")]
	[Address(RVA = "0x4F26330", Offset = "0x4F26330", VA = "0x4F26330")]
	public bool HasSameRules(TimeZoneInfo other)
	{
		return default(bool);
	}

	[Token(Token = "0x600033E")]
	[Address(RVA = "0x4F26890", Offset = "0x4F26890", VA = "0x4F26890", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000340")]
	[Address(RVA = "0x4F26930", Offset = "0x4F26930", VA = "0x4F26930")]
	private TimeZoneInfo(string id, TimeSpan baseUtcOffset, string displayName, string standardDisplayName, string daylightDisplayName, AdjustmentRule[] adjustmentRules, bool disableDaylightSavingTime)
	{
	}

	[Token(Token = "0x6000341")]
	[Address(RVA = "0x4F26A50", Offset = "0x4F26A50", VA = "0x4F26A50")]
	public static TimeZoneInfo CreateCustomTimeZone(string id, TimeSpan baseUtcOffset, string displayName, string standardDisplayName)
	{
		return null;
	}

	[Token(Token = "0x6000342")]
	[Address(RVA = "0x4F26AD0", Offset = "0x4F26AD0", VA = "0x4F26AD0")]
	public static TimeZoneInfo CreateCustomTimeZone(string id, TimeSpan baseUtcOffset, string displayName, string standardDisplayName, string daylightDisplayName, AdjustmentRule[] adjustmentRules, bool disableDaylightSavingTime)
	{
		return null;
	}

	[Token(Token = "0x6000343")]
	[Address(RVA = "0x4F26BD0", Offset = "0x4F26BD0", VA = "0x4F26BD0", Slot = "6")]
	private void System_002ERuntime_002ESerialization_002EIDeserializationCallback_002EOnDeserialization(object sender)
	{
	}

	[Token(Token = "0x6000344")]
	[Address(RVA = "0x4F26DB0", Offset = "0x4F26DB0", VA = "0x4F26DB0", Slot = "5")]
	private void System_002ERuntime_002ESerialization_002EISerializable_002EGetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000345")]
	[Address(RVA = "0x4F26F50", Offset = "0x4F26F50", VA = "0x4F26F50")]
	private TimeZoneInfo(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000346")]
	[Address(RVA = "0x4F252E0", Offset = "0x4F252E0", VA = "0x4F252E0")]
	private AdjustmentRule GetAdjustmentRuleForTime(DateTime dateTime, out int? ruleIndex)
	{
		return null;
	}

	[Token(Token = "0x6000347")]
	[Address(RVA = "0x4F27360", Offset = "0x4F27360", VA = "0x4F27360")]
	private AdjustmentRule GetAdjustmentRuleForTime(DateTime dateTime, bool dateTimeisUtc, out int? ruleIndex)
	{
		return null;
	}

	[Token(Token = "0x6000348")]
	[Address(RVA = "0x4F27540", Offset = "0x4F27540", VA = "0x4F27540")]
	private int CompareAdjustmentRuleToDateTime(AdjustmentRule rule, AdjustmentRule previousRule, DateTime dateTime, DateTime dateOnly, bool dateTimeisUtc)
	{
		return default(int);
	}

	[Token(Token = "0x6000349")]
	[Address(RVA = "0x4F276F0", Offset = "0x4F276F0", VA = "0x4F276F0")]
	private DateTime ConvertToUtc(DateTime dateTime, TimeSpan daylightDelta, TimeSpan baseUtcOffsetDelta)
	{
		return default(DateTime);
	}

	[Token(Token = "0x600034A")]
	[Address(RVA = "0x4F278A0", Offset = "0x4F278A0", VA = "0x4F278A0")]
	private DateTime ConvertFromUtc(DateTime dateTime, TimeSpan daylightDelta, TimeSpan baseUtcOffsetDelta)
	{
		return default(DateTime);
	}

	[Token(Token = "0x600034B")]
	[Address(RVA = "0x4F27700", Offset = "0x4F27700", VA = "0x4F27700")]
	private DateTime ConvertToFromUtc(DateTime dateTime, TimeSpan daylightDelta, TimeSpan baseUtcOffsetDelta, bool convertToUtc)
	{
		return default(DateTime);
	}

	[Token(Token = "0x600034C")]
	[Address(RVA = "0x4F25F20", Offset = "0x4F25F20", VA = "0x4F25F20")]
	private static DateTime ConvertUtcToTimeZone(long ticks, TimeZoneInfo destinationTimeZone, out bool isAmbiguousLocalDst)
	{
		return default(DateTime);
	}

	[Token(Token = "0x600034D")]
	[Address(RVA = "0x4F25500", Offset = "0x4F25500", VA = "0x4F25500")]
	private System.Globalization.DaylightTimeStruct GetDaylightTime(int year, AdjustmentRule rule, int? ruleIndex)
	{
		return default(System.Globalization.DaylightTimeStruct);
	}

	[Token(Token = "0x600034E")]
	[Address(RVA = "0x4F25AA0", Offset = "0x4F25AA0", VA = "0x4F25AA0")]
	private static bool GetIsDaylightSavings(DateTime time, AdjustmentRule rule, System.Globalization.DaylightTimeStruct daylightTime, System.TimeZoneInfoOptions flags)
	{
		return default(bool);
	}

	[Token(Token = "0x600034F")]
	[Address(RVA = "0x4F284C0", Offset = "0x4F284C0", VA = "0x4F284C0")]
	private TimeSpan GetDaylightSavingsStartOffsetFromUtc(TimeSpan baseUtcOffset, AdjustmentRule rule, int? ruleIndex)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x6000350")]
	[Address(RVA = "0x4F28580", Offset = "0x4F28580", VA = "0x4F28580")]
	private TimeSpan GetDaylightSavingsEndOffsetFromUtc(TimeSpan baseUtcOffset, AdjustmentRule rule)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x6000351")]
	[Address(RVA = "0x4F285F0", Offset = "0x4F285F0", VA = "0x4F285F0")]
	private static bool GetIsDaylightSavingsFromUtc(DateTime time, int year, TimeSpan utc, AdjustmentRule rule, int? ruleIndex, out bool isAmbiguousLocalDst, TimeZoneInfo zone)
	{
		return default(bool);
	}

	[Token(Token = "0x6000352")]
	[Address(RVA = "0x4F27E40", Offset = "0x4F27E40", VA = "0x4F27E40")]
	private static bool CheckIsDst(DateTime startTime, DateTime time, DateTime endTime, bool ignoreYearAdjustment, AdjustmentRule rule)
	{
		return default(bool);
	}

	[Token(Token = "0x6000353")]
	[Address(RVA = "0x4F28070", Offset = "0x4F28070", VA = "0x4F28070")]
	private static bool GetIsAmbiguousTime(DateTime time, AdjustmentRule rule, System.Globalization.DaylightTimeStruct daylightTime)
	{
		return default(bool);
	}

	[Token(Token = "0x6000354")]
	[Address(RVA = "0x4F25640", Offset = "0x4F25640", VA = "0x4F25640")]
	private static bool GetIsInvalidTime(DateTime time, AdjustmentRule rule, System.Globalization.DaylightTimeStruct daylightTime)
	{
		return default(bool);
	}

	[Token(Token = "0x6000355")]
	[Address(RVA = "0x4F24A10", Offset = "0x4F24A10", VA = "0x4F24A10")]
	private static TimeSpan GetUtcOffset(DateTime time, TimeZoneInfo zone, System.TimeZoneInfoOptions flags)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x6000356")]
	[Address(RVA = "0x4F24950", Offset = "0x4F24950", VA = "0x4F24950")]
	private static TimeSpan GetUtcOffsetFromUtc(DateTime time, TimeZoneInfo zone)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x6000357")]
	[Address(RVA = "0x4F278B0", Offset = "0x4F278B0", VA = "0x4F278B0")]
	private static TimeSpan GetUtcOffsetFromUtc(DateTime time, TimeZoneInfo zone, out bool isDaylightSavings)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x6000358")]
	[Address(RVA = "0x4F20920", Offset = "0x4F20920", VA = "0x4F20920")]
	internal static TimeSpan GetUtcOffsetFromUtc(DateTime time, TimeZoneInfo zone, out bool isDaylightSavings, out bool isAmbiguousLocalDst)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x6000359")]
	[Address(RVA = "0x4F27920", Offset = "0x4F27920", VA = "0x4F27920")]
	internal static DateTime TransitionTimeToDateTime(int year, TransitionTime transitionTime)
	{
		return default(DateTime);
	}

	[Token(Token = "0x600035A")]
	[Address(RVA = "0x4F1E340", Offset = "0x4F1E340", VA = "0x4F1E340")]
	private static void ValidateTimeZoneInfo(string id, TimeSpan baseUtcOffset, AdjustmentRule[] adjustmentRules, out bool adjustmentRulesSupportDst)
	{
	}

	[Token(Token = "0x600035B")]
	[Address(RVA = "0x4F28F50", Offset = "0x4F28F50", VA = "0x4F28F50")]
	internal static bool UtcOffsetOutOfRange(TimeSpan offset)
	{
		return default(bool);
	}

	[Token(Token = "0x600035C")]
	[Address(RVA = "0x4F29070", Offset = "0x4F29070", VA = "0x4F29070")]
	private static TimeSpan GetUtcOffset(TimeSpan baseUtcOffset, AdjustmentRule adjustmentRule)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x600035D")]
	[Address(RVA = "0x4F21BB0", Offset = "0x4F21BB0", VA = "0x4F21BB0")]
	private static bool IsValidAdjustmentRuleOffest(TimeSpan baseUtcOffset, AdjustmentRule adjustmentRule)
	{
		return default(bool);
	}

	[Token(Token = "0x600035E")]
	[Address(RVA = "0x4F21C10", Offset = "0x4F21C10", VA = "0x4F21C10")]
	private static void NormalizeAdjustmentRuleOffset(TimeSpan baseUtcOffset, ref AdjustmentRule adjustmentRule)
	{
	}

	[Token(Token = "0x600035F")]
	[Address(RVA = "0x4F29160", Offset = "0x4F29160", VA = "0x4F29160")]
	private static string GetTimeZoneDirectoryUnity()
	{
		return null;
	}

	[Token(Token = "0x6000360")]
	[Address(RVA = "0x4F29180", Offset = "0x4F29180", VA = "0x4F29180")]
	private static List<AdjustmentRule> CreateAdjustmentRule(int year, out long[] data, out string[] names)
	{
		return null;
	}

	[Token(Token = "0x6000361")]
	[Address(RVA = "0x4F20190", Offset = "0x4F20190", VA = "0x4F20190")]
	private static TimeZoneInfo CreateLocalUnity()
	{
		return null;
	}

	[Token(Token = "0x6000363")]
	[Address(RVA = "0x4F29F90", Offset = "0x4F29F90", VA = "0x4F29F90")]
	internal TimeZoneInfo()
	{
	}
}
