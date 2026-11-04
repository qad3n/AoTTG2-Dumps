// ==================== AoTTG2 cross-reference ====================
// Type: System.TimeZoneInfo
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Globalization;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Runtime.Serialization;
using Il2CppDummyDll;
using Microsoft.Win32;

namespace System;

[Serializable]
[Token(Token = "0x2000092")]
[TypeForwardedFrom("System.Core, Version=2.0.5.0, Culture=Neutral, PublicKeyToken=7cec85d7bea7798e")]
public sealed class TimeZoneInfo : IEquatable<TimeZoneInfo>, ISerializable, IDeserializationCallback
{
	[Token(Token = "0x2000093")]
	private sealed class CachedData
	{
		[Token(Token = "0x4000260")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private OffsetAndRule _oneYearLocalFromUtc;

		[Token(Token = "0x4000261")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private TimeZoneInfo _localTimeZone;

		[Token(Token = "0x4000262")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public Dictionary<string, TimeZoneInfo> _systemTimeZones;

		[Token(Token = "0x4000263")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public ReadOnlyCollection<TimeZoneInfo> _readOnlySystemTimeZones;

		[Token(Token = "0x4000264")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public bool _allSystemTimeZonesRead;

		[Token(Token = "0x17000045")]
		public TimeZoneInfo Local
		{
			[Token(Token = "0x600039F")]
			[Address(RVA = "0x1A7BC40", Offset = "0x1A7A240", VA = "0x181A7BC40")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600039C")]
		[Address(RVA = "0x1A7B960", Offset = "0x1A79F60", VA = "0x181A7B960")]
		private static TimeZoneInfo GetCurrentOneYearLocal()
		{
			return null;
		}

		[Token(Token = "0x600039D")]
		[Address(RVA = "0x1A7BA60", Offset = "0x1A7A060", VA = "0x181A7BA60")]
		public OffsetAndRule GetOneYearLocalFromUtc(int year)
		{
			return null;
		}

		[Token(Token = "0x600039E")]
		[Address(RVA = "0x1A7B730", Offset = "0x1A79D30", VA = "0x181A7B730")]
		private TimeZoneInfo CreateLocal()
		{
			return null;
		}

		[Token(Token = "0x60003A0")]
		[Address(RVA = "0x1A7B8D0", Offset = "0x1A79ED0", VA = "0x181A7B8D0")]
		public DateTimeKind GetCorrespondingKind(TimeZoneInfo timeZone)
		{
			return default(DateTimeKind);
		}

		[Token(Token = "0x60003A1")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public CachedData()
		{
		}
	}

	[Token(Token = "0x2000094")]
	private sealed class OffsetAndRule
	{
		[Token(Token = "0x4000265")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public readonly int Year;

		[Token(Token = "0x4000266")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public readonly TimeSpan Offset;

		[Token(Token = "0x4000267")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public readonly AdjustmentRule Rule;

		[Token(Token = "0x60003A2")]
		[Address(RVA = "0x1A87300", Offset = "0x1A85900", VA = "0x181A87300")]
		public OffsetAndRule(int year, TimeSpan offset, AdjustmentRule rule)
		{
		}
	}

	[StructLayout((LayoutKind)0, CharSet = CharSet.Unicode)]
	[Token(Token = "0x2000095")]
	internal struct DYNAMIC_TIME_ZONE_INFORMATION
	{
		[Token(Token = "0x4000268")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		internal global::Interop.Kernel32.TIME_ZONE_INFORMATION TZI;

		[Token(Token = "0x4000269")]
		[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
		internal string TimeZoneKeyName;

		[Token(Token = "0x400026A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
		internal byte DynamicDaylightTimeDisabled;
	}

	[Token(Token = "0x2000096")]
	private enum TimeZoneInfoResult
	{
		[Token(Token = "0x400026C")]
		Success,
		[Token(Token = "0x400026D")]
		TimeZoneNotFoundException,
		[Token(Token = "0x400026E")]
		InvalidTimeZoneException,
		[Token(Token = "0x400026F")]
		SecurityException
	}

	[Serializable]
	[Token(Token = "0x2000097")]
	public sealed class AdjustmentRule : IEquatable<AdjustmentRule>, ISerializable, IDeserializationCallback
	{
		[Token(Token = "0x4000270")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private readonly DateTime _dateStart;

		[Token(Token = "0x4000271")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private readonly DateTime _dateEnd;

		[Token(Token = "0x4000272")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private readonly TimeSpan _daylightDelta;

		[Token(Token = "0x4000273")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private readonly TransitionTime _daylightTransitionStart;

		[Token(Token = "0x4000274")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private readonly TransitionTime _daylightTransitionEnd;

		[Token(Token = "0x4000275")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
		private readonly TimeSpan _baseUtcOffsetDelta;

		[Token(Token = "0x4000276")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
		private readonly bool _noDaylightTransitions;

		[Token(Token = "0x17000046")]
		public DateTime DateStart
		{
			[Token(Token = "0x60003A3")]
			[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
			get
			{
				return default(DateTime);
			}
		}

		[Token(Token = "0x17000047")]
		public DateTime DateEnd
		{
			[Token(Token = "0x60003A4")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
			get
			{
				return default(DateTime);
			}
		}

		[Token(Token = "0x17000048")]
		public TimeSpan DaylightDelta
		{
			[Token(Token = "0x60003A5")]
			[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
			get
			{
				return default(TimeSpan);
			}
		}

		[Token(Token = "0x17000049")]
		public TransitionTime DaylightTransitionStart
		{
			[Token(Token = "0x60003A6")]
			[Address(RVA = "0x181CDF0", Offset = "0x181B3F0", VA = "0x18181CDF0")]
			get
			{
				return default(TransitionTime);
			}
		}

		[Token(Token = "0x1700004A")]
		public TransitionTime DaylightTransitionEnd
		{
			[Token(Token = "0x60003A7")]
			[Address(RVA = "0x1A762D0", Offset = "0x1A748D0", VA = "0x181A762D0")]
			get
			{
				return default(TransitionTime);
			}
		}

		[Token(Token = "0x1700004B")]
		internal TimeSpan BaseUtcOffsetDelta
		{
			[Token(Token = "0x60003A8")]
			[Address(RVA = "0x58A570", Offset = "0x588B70", VA = "0x18058A570")]
			get
			{
				return default(TimeSpan);
			}
		}

		[Token(Token = "0x1700004C")]
		internal bool NoDaylightTransitions
		{
			[Token(Token = "0x60003A9")]
			[Address(RVA = "0x198C740", Offset = "0x198AD40", VA = "0x18198C740")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x1700004D")]
		internal bool HasDaylightSaving
		{
			[Token(Token = "0x60003AA")]
			[Address(RVA = "0x1A762F0", Offset = "0x1A748F0", VA = "0x181A762F0")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x60003AB")]
		[Address(RVA = "0x1A75030", Offset = "0x1A73630", VA = "0x181A75030", Slot = "4")]
		public bool Equals(AdjustmentRule other)
		{
			return default(bool);
		}

		[Token(Token = "0x60003AC")]
		[Address(RVA = "0x1A751B0", Offset = "0x1A737B0", VA = "0x181A751B0", Slot = "2")]
		public override int GetHashCode()
		{
			return default(int);
		}

		[Token(Token = "0x60003AD")]
		[Address(RVA = "0x1A761B0", Offset = "0x1A747B0", VA = "0x181A761B0")]
		private AdjustmentRule(DateTime dateStart, DateTime dateEnd, TimeSpan daylightDelta, TransitionTime daylightTransitionStart, TransitionTime daylightTransitionEnd, TimeSpan baseUtcOffsetDelta, bool noDaylightTransitions)
		{
		}

		[Token(Token = "0x60003AE")]
		[Address(RVA = "0x1A74F10", Offset = "0x1A73510", VA = "0x181A74F10")]
		internal static AdjustmentRule CreateAdjustmentRule(DateTime dateStart, DateTime dateEnd, TimeSpan daylightDelta, TransitionTime daylightTransitionStart, TransitionTime daylightTransitionEnd, TimeSpan baseUtcOffsetDelta, bool noDaylightTransitions)
		{
			return null;
		}

		[Token(Token = "0x60003AF")]
		[Address(RVA = "0x1A75320", Offset = "0x1A73920", VA = "0x181A75320")]
		internal bool IsStartDateMarkerForBeginningOfYear()
		{
			return default(bool);
		}

		[Token(Token = "0x60003B0")]
		[Address(RVA = "0x1A75200", Offset = "0x1A73800", VA = "0x181A75200")]
		internal bool IsEndDateMarkerForEndOfYear()
		{
			return default(bool);
		}

		[Token(Token = "0x60003B1")]
		[Address(RVA = "0x1A75720", Offset = "0x1A73D20", VA = "0x181A75720")]
		private static void ValidateAdjustmentRule(DateTime dateStart, DateTime dateEnd, TimeSpan daylightDelta, TransitionTime daylightTransitionStart, TransitionTime daylightTransitionEnd, bool noDaylightTransitions)
		{
		}

		[Token(Token = "0x60003B2")]
		[Address(RVA = "0x1A75440", Offset = "0x1A73A40", VA = "0x181A75440", Slot = "6")]
		private void System_002ERuntime_002ESerialization_002EIDeserializationCallback_002EOnDeserialization(object sender)
		{
		}

		[Token(Token = "0x60003B3")]
		[Address(RVA = "0x1A75520", Offset = "0x1A73B20", VA = "0x181A75520", Slot = "5")]
		private void System_002ERuntime_002ESerialization_002EISerializable_002EGetObjectData(SerializationInfo info, StreamingContext context)
		{
		}

		[Token(Token = "0x60003B4")]
		[Address(RVA = "0x1A75DB0", Offset = "0x1A743B0", VA = "0x181A75DB0")]
		private AdjustmentRule(SerializationInfo info, StreamingContext context)
		{
		}

		[Token(Token = "0x60003B5")]
		[Address(RVA = "0x1A762A0", Offset = "0x1A748A0", VA = "0x181A762A0")]
		internal AdjustmentRule()
		{
		}
	}

	[Serializable]
	[Token(Token = "0x2000098")]
	public readonly struct TransitionTime : IEquatable<TransitionTime>, ISerializable, IDeserializationCallback
	{
		[Token(Token = "0x4000277")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private readonly DateTime _timeOfDay;

		[Token(Token = "0x4000278")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		private readonly byte _month;

		[Token(Token = "0x4000279")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x9")]
		private readonly byte _week;

		[Token(Token = "0x400027A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0xA")]
		private readonly byte _day;

		[Token(Token = "0x400027B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0xC")]
		private readonly DayOfWeek _dayOfWeek;

		[Token(Token = "0x400027C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private readonly bool _isFixedDateRule;

		[Token(Token = "0x1700004E")]
		public DateTime TimeOfDay
		{
			[Token(Token = "0x60003B6")]
			[Address(RVA = "0x72FFC0", Offset = "0x72E5C0", VA = "0x18072FFC0")]
			get
			{
				return default(DateTime);
			}
		}

		[Token(Token = "0x1700004F")]
		public int Month
		{
			[Token(Token = "0x60003B7")]
			[Address(RVA = "0x180F960", Offset = "0x180DF60", VA = "0x18180F960")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x17000050")]
		public int Week
		{
			[Token(Token = "0x60003B8")]
			[Address(RVA = "0x1A931B0", Offset = "0x1A917B0", VA = "0x181A931B0")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x17000051")]
		public int Day
		{
			[Token(Token = "0x60003B9")]
			[Address(RVA = "0x1A931A0", Offset = "0x1A917A0", VA = "0x181A931A0")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x17000052")]
		public DayOfWeek DayOfWeek
		{
			[Token(Token = "0x60003BA")]
			[Address(RVA = "0x57AEF0", Offset = "0x5794F0", VA = "0x18057AEF0")]
			get
			{
				return default(DayOfWeek);
			}
		}

		[Token(Token = "0x17000053")]
		public bool IsFixedDateRule
		{
			[Token(Token = "0x60003BB")]
			[Address(RVA = "0xE5A320", Offset = "0xE58920", VA = "0x180E5A320")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x60003BC")]
		[Address(RVA = "0x1A926F0", Offset = "0x1A90CF0", VA = "0x181A926F0", Slot = "0")]
		public override bool Equals(object obj)
		{
			return default(bool);
		}

		[Token(Token = "0x60003BD")]
		[Address(RVA = "0x1A931C0", Offset = "0x1A917C0", VA = "0x181A931C0")]
		public static bool operator !=(TransitionTime t1, TransitionTime t2)
		{
			return default(bool);
		}

		[Token(Token = "0x60003BE")]
		[Address(RVA = "0x1A92790", Offset = "0x1A90D90", VA = "0x181A92790", Slot = "4")]
		public bool Equals(TransitionTime other)
		{
			return default(bool);
		}

		[Token(Token = "0x60003BF")]
		[Address(RVA = "0x1A92860", Offset = "0x1A90E60", VA = "0x181A92860", Slot = "2")]
		public override int GetHashCode()
		{
			return default(int);
		}

		[Token(Token = "0x60003C0")]
		[Address(RVA = "0x1A92DE0", Offset = "0x1A913E0", VA = "0x181A92DE0")]
		private TransitionTime(DateTime timeOfDay, int month, int week, int day, DayOfWeek dayOfWeek, bool isFixedDateRule)
		{
		}

		[Token(Token = "0x60003C1")]
		[Address(RVA = "0x1A92610", Offset = "0x1A90C10", VA = "0x181A92610")]
		public static TransitionTime CreateFixedDateRule(DateTime timeOfDay, int month, int day)
		{
			return default(TransitionTime);
		}

		[Token(Token = "0x60003C2")]
		[Address(RVA = "0x1A92680", Offset = "0x1A90C80", VA = "0x181A92680")]
		public static TransitionTime CreateFloatingDateRule(DateTime timeOfDay, int month, int week, DayOfWeek dayOfWeek)
		{
			return default(TransitionTime);
		}

		[Token(Token = "0x60003C3")]
		[Address(RVA = "0x1A92A80", Offset = "0x1A91080", VA = "0x181A92A80")]
		private static void ValidateTransitionTime(DateTime timeOfDay, int month, int week, int day, DayOfWeek dayOfWeek)
		{
		}

		[Token(Token = "0x60003C4")]
		[Address(RVA = "0x1A92870", Offset = "0x1A90E70", VA = "0x181A92870", Slot = "6")]
		private void System_002ERuntime_002ESerialization_002EIDeserializationCallback_002EOnDeserialization(object sender)
		{
		}

		[Token(Token = "0x60003C5")]
		[Address(RVA = "0x1A92910", Offset = "0x1A90F10", VA = "0x181A92910", Slot = "5")]
		private void System_002ERuntime_002ESerialization_002EISerializable_002EGetObjectData(SerializationInfo info, StreamingContext context)
		{
		}

		[Token(Token = "0x60003C6")]
		[Address(RVA = "0x1A92E50", Offset = "0x1A91450", VA = "0x181A92E50")]
		private TransitionTime(SerializationInfo info, StreamingContext context)
		{
		}
	}

	[Token(Token = "0x4000252")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static Lazy<bool> lazyHaveRegistry;

	[Token(Token = "0x4000253")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private readonly string _id;

	[Token(Token = "0x4000254")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private readonly string _displayName;

	[Token(Token = "0x4000255")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private readonly string _standardDisplayName;

	[Token(Token = "0x4000256")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private readonly string _daylightDisplayName;

	[Token(Token = "0x4000257")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private readonly TimeSpan _baseUtcOffset;

	[Token(Token = "0x4000258")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private readonly bool _supportsDaylightSavingTime;

	[Token(Token = "0x4000259")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private readonly AdjustmentRule[] _adjustmentRules;

	[Token(Token = "0x400025A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static readonly TimeZoneInfo s_utcTimeZone;

	[Token(Token = "0x400025B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private static CachedData s_cachedData;

	[Token(Token = "0x400025C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private static readonly DateTime s_maxDateOnly;

	[Token(Token = "0x400025D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private static readonly DateTime s_minDateOnly;

	[Token(Token = "0x400025E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private static readonly TimeSpan MaxOffset;

	[Token(Token = "0x400025F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private static readonly TimeSpan MinOffset;

	[Token(Token = "0x1700003F")]
	private static bool HaveRegistry
	{
		[Token(Token = "0x600035D")]
		[Address(RVA = "0x1A924C0", Offset = "0x1A90AC0", VA = "0x181A924C0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000040")]
	public string Id
	{
		[Token(Token = "0x6000368")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000041")]
	public string DisplayName
	{
		[Token(Token = "0x6000369")]
		[Address(RVA = "0x1A8E540", Offset = "0x1A8CB40", VA = "0x181A8E540")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000042")]
	public TimeSpan BaseUtcOffset
	{
		[Token(Token = "0x600036A")]
		[Address(RVA = "0x5853F0", Offset = "0x5839F0", VA = "0x1805853F0")]
		get
		{
			return default(TimeSpan);
		}
	}

	[Token(Token = "0x17000043")]
	public static TimeZoneInfo Local
	{
		[Token(Token = "0x6000378")]
		[Address(RVA = "0x1A92530", Offset = "0x1A90B30", VA = "0x181A92530")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000044")]
	public static TimeZoneInfo Utc
	{
		[Token(Token = "0x600037A")]
		[Address(RVA = "0x1A925C0", Offset = "0x1A90BC0", VA = "0x181A925C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600034A")]
	[Address(RVA = "0x1A8E160", Offset = "0x1A8C760", VA = "0x181A8E160")]
	private static void PopulateAllSystemTimeZones(CachedData cachedData)
	{
	}

	[Token(Token = "0x600034B")]
	[Address(RVA = "0x1A8DFB0", Offset = "0x1A8C5B0", VA = "0x181A8DFB0")]
	private static void PopulateAllSystemTimeZonesFromRegistry(CachedData cachedData)
	{
	}

	[Token(Token = "0x600034C")]
	[Address(RVA = "0x1A92130", Offset = "0x1A90730", VA = "0x181A92130")]
	private TimeZoneInfo(in global::Interop.Kernel32.TIME_ZONE_INFORMATION zone, bool dstDisabled)
	{
	}

	[Token(Token = "0x600034D")]
	[Address(RVA = "0x1A87340", Offset = "0x1A85940", VA = "0x181A87340")]
	private static bool CheckDaylightSavingTimeNotSupported(in global::Interop.Kernel32.TIME_ZONE_INFORMATION timeZone)
	{
		return default(bool);
	}

	[Token(Token = "0x600034E")]
	[Address(RVA = "0x1A88910", Offset = "0x1A86F10", VA = "0x181A88910")]
	private static AdjustmentRule CreateAdjustmentRuleFromTimeZoneInformation(in global::Interop.Kernel32.REG_TZI_FORMAT timeZoneInformation, DateTime startDate, DateTime endDate, int defaultBaseUtcOffset)
	{
		return null;
	}

	[Token(Token = "0x600034F")]
	[Address(RVA = "0x1A88F90", Offset = "0x1A87590", VA = "0x181A88F90")]
	private static string FindIdFromTimeZoneInformation(in global::Interop.Kernel32.TIME_ZONE_INFORMATION timeZone, out bool dstDisabled)
	{
		return null;
	}

	[Token(Token = "0x6000350")]
	[Address(RVA = "0x1A8B9C0", Offset = "0x1A89FC0", VA = "0x181A8B9C0")]
	private static TimeZoneInfo GetLocalTimeZone(CachedData cachedData)
	{
		return null;
	}

	[Token(Token = "0x6000351")]
	[Address(RVA = "0x1A8B470", Offset = "0x1A89A70", VA = "0x181A8B470")]
	private static TimeZoneInfo GetLocalTimeZoneFromWin32Data(in global::Interop.Kernel32.TIME_ZONE_INFORMATION timeZoneInformation, bool dstDisabled)
	{
		return null;
	}

	[Token(Token = "0x6000352")]
	[Address(RVA = "0x1A89600", Offset = "0x1A87C00", VA = "0x181A89600")]
	internal static TimeSpan GetDateTimeNowUtcOffsetFromUtc(DateTime time, out bool isAmbiguousLocalDst)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x6000353")]
	[Address(RVA = "0x1A8E7F0", Offset = "0x1A8CDF0", VA = "0x181A8E7F0")]
	private static bool TransitionTimeFromTimeZoneInformation(in global::Interop.Kernel32.REG_TZI_FORMAT timeZoneInformation, out TransitionTime transitionTime, bool readStartDate)
	{
		return default(bool);
	}

	[Token(Token = "0x6000354")]
	[Address(RVA = "0x1A8F1E0", Offset = "0x1A8D7E0", VA = "0x181A8F1E0")]
	private static bool TryCreateAdjustmentRules(string id, in global::Interop.Kernel32.REG_TZI_FORMAT defaultTimeZoneInformation, out AdjustmentRule[] rules, out Exception e, int defaultBaseUtcOffset)
	{
		return default(bool);
	}

	[Token(Token = "0x6000355")]
	[Address(RVA = "0x1A907C0", Offset = "0x1A8EDC0", VA = "0x181A907C0")]
	private static bool TryGetTimeZoneEntryFromRegistry(RegistryKey key, string name, out global::Interop.Kernel32.REG_TZI_FORMAT dtzi)
	{
		return default(bool);
	}

	[Token(Token = "0x6000356")]
	[Address(RVA = "0x1A8ED00", Offset = "0x1A8D300", VA = "0x181A8ED00")]
	private static bool TryCompareStandardDate(in global::Interop.Kernel32.TIME_ZONE_INFORMATION timeZone, in global::Interop.Kernel32.REG_TZI_FORMAT registryTimeZoneInfo)
	{
		return default(bool);
	}

	[Token(Token = "0x6000357")]
	[Address(RVA = "0x1A8ED40", Offset = "0x1A8D340", VA = "0x181A8ED40")]
	private static bool TryCompareTimeZoneInformationToRegistry(in global::Interop.Kernel32.TIME_ZONE_INFORMATION timeZone, string id, out bool dstDisabled)
	{
		return default(bool);
	}

	[Token(Token = "0x6000358")]
	[Address(RVA = "0x1A903F0", Offset = "0x1A8E9F0", VA = "0x181A903F0")]
	private static string TryGetLocalizedNameByMuiNativeResource(string resource)
	{
		return null;
	}

	[Token(Token = "0x6000359")]
	[Address(RVA = "0x1A90670", Offset = "0x1A8EC70", VA = "0x181A90670")]
	private static string TryGetLocalizedNameByNativeResource(string filePath, int resource)
	{
		return null;
	}

	[Token(Token = "0x600035A")]
	[Address(RVA = "0x1A8BDC0", Offset = "0x1A8A3C0", VA = "0x181A8BDC0")]
	private static void GetLocalizedNamesByRegistryKey(RegistryKey key, out string displayName, out string standardName, out string daylightName)
	{
	}

	[Token(Token = "0x600035B")]
	[Address(RVA = "0x1A90C20", Offset = "0x1A8F220", VA = "0x181A90C20")]
	private static TimeZoneInfoResult TryGetTimeZoneFromLocalMachine(string id, out TimeZoneInfo value, out Exception e)
	{
		return default(TimeZoneInfoResult);
	}

	[Token(Token = "0x600035C")]
	[Address(RVA = "0x1A90D00", Offset = "0x1A8F300", VA = "0x181A90D00")]
	private static TimeZoneInfoResult TryGetTimeZoneFromLocalRegistry(string id, out TimeZoneInfo value, out Exception e)
	{
		return default(TimeZoneInfoResult);
	}

	[PreserveSig]
	[Token(Token = "0x600035E")]
	[Address(RVA = "0x1A88D50", Offset = "0x1A87350", VA = "0x181A88D50")]
	internal static extern uint EnumDynamicTimeZoneInformation(uint dwIndex, out DYNAMIC_TIME_ZONE_INFORMATION lpTimeZoneInformation);

	[PreserveSig]
	[Token(Token = "0x600035F")]
	[Address(RVA = "0x1A89DF0", Offset = "0x1A883F0", VA = "0x181A89DF0")]
	internal static extern uint GetDynamicTimeZoneInformation(out DYNAMIC_TIME_ZONE_INFORMATION pTimeZoneInformation);

	[PreserveSig]
	[Token(Token = "0x6000360")]
	[Address(RVA = "0x1A89C90", Offset = "0x1A88290", VA = "0x181A89C90")]
	internal static extern uint GetDynamicTimeZoneInformationEffectiveYears(ref DYNAMIC_TIME_ZONE_INFORMATION lpTimeZoneInformation, out uint FirstYear, out uint LastYear);

	[PreserveSig]
	[Token(Token = "0x6000361")]
	[Address(RVA = "0x1A8CE30", Offset = "0x1A8B430", VA = "0x181A8CE30")]
	internal static extern bool GetTimeZoneInformationForYear(ushort wYear, ref DYNAMIC_TIME_ZONE_INFORMATION pdtzi, out global::Interop.Kernel32.TIME_ZONE_INFORMATION ptzi);

	[Token(Token = "0x6000362")]
	[Address(RVA = "0x1A88360", Offset = "0x1A86960", VA = "0x181A88360")]
	internal static AdjustmentRule CreateAdjustmentRuleFromTimeZoneInformation(ref DYNAMIC_TIME_ZONE_INFORMATION timeZoneInformation, DateTime startDate, DateTime endDate, int defaultBaseUtcOffset)
	{
		return null;
	}

	[Token(Token = "0x6000363")]
	[Address(RVA = "0x1A8E560", Offset = "0x1A8CB60", VA = "0x181A8E560")]
	private static bool TransitionTimeFromTimeZoneInformation(DYNAMIC_TIME_ZONE_INFORMATION timeZoneInformation, out TransitionTime transitionTime, bool readStartDate)
	{
		return default(bool);
	}

	[Token(Token = "0x6000364")]
	[Address(RVA = "0x1A8FBF0", Offset = "0x1A8E1F0", VA = "0x181A8FBF0")]
	internal static TimeZoneInfo TryCreateTimeZone(DYNAMIC_TIME_ZONE_INFORMATION timeZoneInformation)
	{
		return null;
	}

	[Token(Token = "0x6000365")]
	[Address(RVA = "0x1A8B590", Offset = "0x1A89B90", VA = "0x181A8B590")]
	internal static TimeZoneInfo GetLocalTimeZoneInfoWinRTFallback()
	{
		return null;
	}

	[Token(Token = "0x6000366")]
	[Address(RVA = "0x1A89160", Offset = "0x1A87760", VA = "0x181A89160")]
	internal static TimeZoneInfo FindSystemTimeZoneByIdWinRTFallback(string id)
	{
		return null;
	}

	[Token(Token = "0x6000367")]
	[Address(RVA = "0x1A8C2A0", Offset = "0x1A8A8A0", VA = "0x181A8C2A0")]
	private static void GetSystemTimeZonesWinRTFallback(CachedData cachedData)
	{
	}

	[Token(Token = "0x600036B")]
	[Address(RVA = "0x1A8C190", Offset = "0x1A8A790", VA = "0x181A8C190")]
	private AdjustmentRule GetPreviousAdjustmentRule(AdjustmentRule rule, int? ruleIndex)
	{
		return null;
	}

	[Token(Token = "0x600036C")]
	[Address(RVA = "0x1A8DB20", Offset = "0x1A8C120", VA = "0x181A8DB20")]
	public TimeSpan GetUtcOffset(DateTime dateTime)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x600036D")]
	[Address(RVA = "0x1A8BD00", Offset = "0x1A8A300", VA = "0x181A8BD00")]
	internal static TimeSpan GetLocalUtcOffset(DateTime dateTime, System.TimeZoneInfoOptions flags)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x600036E")]
	[Address(RVA = "0x1A8D3F0", Offset = "0x1A8B9F0", VA = "0x181A8D3F0")]
	internal TimeSpan GetUtcOffset(DateTime dateTime, System.TimeZoneInfoOptions flags)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x600036F")]
	[Address(RVA = "0x1A8D550", Offset = "0x1A8BB50", VA = "0x181A8D550")]
	private TimeSpan GetUtcOffset(DateTime dateTime, System.TimeZoneInfoOptions flags, CachedData cachedData)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x6000370")]
	[Address(RVA = "0x1A87920", Offset = "0x1A85F20", VA = "0x181A87920")]
	internal static DateTime ConvertTime(DateTime dateTime, TimeZoneInfo sourceTimeZone, TimeZoneInfo destinationTimeZone, System.TimeZoneInfoOptions flags)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000371")]
	[Address(RVA = "0x1A879B0", Offset = "0x1A85FB0", VA = "0x181A879B0")]
	private static DateTime ConvertTime(DateTime dateTime, TimeZoneInfo sourceTimeZone, TimeZoneInfo destinationTimeZone, System.TimeZoneInfoOptions flags, CachedData cachedData)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000372")]
	[Address(RVA = "0x1A87810", Offset = "0x1A85E10", VA = "0x181A87810")]
	internal static DateTime ConvertTimeToUtc(DateTime dateTime, System.TimeZoneInfoOptions flags)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000373")]
	[Address(RVA = "0x1A88E90", Offset = "0x1A87490", VA = "0x181A88E90", Slot = "4")]
	public bool Equals(TimeZoneInfo other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000374")]
	[Address(RVA = "0x1A88EF0", Offset = "0x1A874F0", VA = "0x181A88EF0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000375")]
	[Address(RVA = "0x1A89F40", Offset = "0x1A88540", VA = "0x181A89F40", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000376")]
	[Address(RVA = "0x1A8CAC0", Offset = "0x1A8B0C0", VA = "0x181A8CAC0")]
	public static ReadOnlyCollection<TimeZoneInfo> GetSystemTimeZones()
	{
		return null;
	}

	[Token(Token = "0x6000377")]
	[Address(RVA = "0x1A8DBA0", Offset = "0x1A8C1A0", VA = "0x181A8DBA0")]
	public bool HasSameRules(TimeZoneInfo other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000379")]
	[Address(RVA = "0x1A8E540", Offset = "0x1A8CB40", VA = "0x181A8E540", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x600037B")]
	[Address(RVA = "0x1A92020", Offset = "0x1A90620", VA = "0x181A92020")]
	private TimeZoneInfo(string id, TimeSpan baseUtcOffset, string displayName, string standardDisplayName, string daylightDisplayName, AdjustmentRule[] adjustmentRules, bool disableDaylightSavingTime)
	{
	}

	[Token(Token = "0x600037C")]
	[Address(RVA = "0x1A88CD0", Offset = "0x1A872D0", VA = "0x181A88CD0")]
	public static TimeZoneInfo CreateCustomTimeZone(string id, TimeSpan baseUtcOffset, string displayName, string standardDisplayName)
	{
		return null;
	}

	[Token(Token = "0x600037D")]
	[Address(RVA = "0x1A8E1F0", Offset = "0x1A8C7F0", VA = "0x181A8E1F0", Slot = "6")]
	private void System_002ERuntime_002ESerialization_002EIDeserializationCallback_002EOnDeserialization(object sender)
	{
	}

	[Token(Token = "0x600037E")]
	[Address(RVA = "0x1A8E3A0", Offset = "0x1A8C9A0", VA = "0x181A8E3A0", Slot = "5")]
	private void System_002ERuntime_002ESerialization_002EISerializable_002EGetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x600037F")]
	[Address(RVA = "0x1A91B30", Offset = "0x1A90130", VA = "0x181A91B30")]
	private TimeZoneInfo(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000380")]
	[Address(RVA = "0x1A895E0", Offset = "0x1A87BE0", VA = "0x181A895E0")]
	private AdjustmentRule GetAdjustmentRuleForTime(DateTime dateTime, out int? ruleIndex)
	{
		return null;
	}

	[Token(Token = "0x6000381")]
	[Address(RVA = "0x1A893E0", Offset = "0x1A879E0", VA = "0x181A893E0")]
	private AdjustmentRule GetAdjustmentRuleForTime(DateTime dateTime, bool dateTimeisUtc, out int? ruleIndex)
	{
		return null;
	}

	[Token(Token = "0x6000382")]
	[Address(RVA = "0x1A87610", Offset = "0x1A85C10", VA = "0x181A87610")]
	private int CompareAdjustmentRuleToDateTime(AdjustmentRule rule, AdjustmentRule previousRule, DateTime dateTime, DateTime dateOnly, bool dateTimeisUtc)
	{
		return default(int);
	}

	[Token(Token = "0x6000383")]
	[Address(RVA = "0x1A880E0", Offset = "0x1A866E0", VA = "0x181A880E0")]
	private DateTime ConvertToUtc(DateTime dateTime, TimeSpan daylightDelta, TimeSpan baseUtcOffsetDelta)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000384")]
	[Address(RVA = "0x1A877F0", Offset = "0x1A85DF0", VA = "0x181A877F0")]
	private DateTime ConvertFromUtc(DateTime dateTime, TimeSpan daylightDelta, TimeSpan baseUtcOffsetDelta)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000385")]
	[Address(RVA = "0x1A87F10", Offset = "0x1A86510", VA = "0x181A87F10")]
	private DateTime ConvertToFromUtc(DateTime dateTime, TimeSpan daylightDelta, TimeSpan baseUtcOffsetDelta, bool convertToUtc)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000386")]
	[Address(RVA = "0x1A88100", Offset = "0x1A86700", VA = "0x181A88100")]
	private static DateTime ConvertUtcToTimeZone(long ticks, TimeZoneInfo destinationTimeZone, out bool isAmbiguousLocalDst)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000387")]
	[Address(RVA = "0x1A89B00", Offset = "0x1A88100", VA = "0x181A89B00")]
	private System.Globalization.DaylightTimeStruct GetDaylightTime(int year, AdjustmentRule rule, int? ruleIndex)
	{
		return default(System.Globalization.DaylightTimeStruct);
	}

	[Token(Token = "0x6000388")]
	[Address(RVA = "0x1A8AC50", Offset = "0x1A89250", VA = "0x181A8AC50")]
	private static bool GetIsDaylightSavings(DateTime time, AdjustmentRule rule, System.Globalization.DaylightTimeStruct daylightTime, System.TimeZoneInfoOptions flags)
	{
		return default(bool);
	}

	[Token(Token = "0x6000389")]
	[Address(RVA = "0x1A89A30", Offset = "0x1A88030", VA = "0x181A89A30")]
	private TimeSpan GetDaylightSavingsStartOffsetFromUtc(TimeSpan baseUtcOffset, AdjustmentRule rule, int? ruleIndex)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x600038A")]
	[Address(RVA = "0x1A899A0", Offset = "0x1A87FA0", VA = "0x181A899A0")]
	private TimeSpan GetDaylightSavingsEndOffsetFromUtc(TimeSpan baseUtcOffset, AdjustmentRule rule)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x600038B")]
	[Address(RVA = "0x1A8A370", Offset = "0x1A88970", VA = "0x181A8A370")]
	private static bool GetIsDaylightSavingsFromUtc(DateTime time, int year, TimeSpan utc, AdjustmentRule rule, int? ruleIndex, out bool isAmbiguousLocalDst, TimeZoneInfo zone)
	{
		return default(bool);
	}

	[Token(Token = "0x600038C")]
	[Address(RVA = "0x1A87370", Offset = "0x1A85970", VA = "0x181A87370")]
	private static bool CheckIsDst(DateTime startTime, DateTime time, DateTime endTime, bool ignoreYearAdjustment, AdjustmentRule rule)
	{
		return default(bool);
	}

	[Token(Token = "0x600038D")]
	[Address(RVA = "0x1A89FF0", Offset = "0x1A885F0", VA = "0x181A89FF0")]
	private static bool GetIsAmbiguousTime(DateTime time, AdjustmentRule rule, System.Globalization.DaylightTimeStruct daylightTime)
	{
		return default(bool);
	}

	[Token(Token = "0x600038E")]
	[Address(RVA = "0x1A8B0F0", Offset = "0x1A896F0", VA = "0x181A8B0F0")]
	private static bool GetIsInvalidTime(DateTime time, AdjustmentRule rule, System.Globalization.DaylightTimeStruct daylightTime)
	{
		return default(bool);
	}

	[Token(Token = "0x600038F")]
	[Address(RVA = "0x1A8D920", Offset = "0x1A8BF20", VA = "0x181A8D920")]
	private static TimeSpan GetUtcOffset(DateTime time, TimeZoneInfo zone, System.TimeZoneInfoOptions flags)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x6000390")]
	[Address(RVA = "0x1A8D010", Offset = "0x1A8B610", VA = "0x181A8D010")]
	private static TimeSpan GetUtcOffsetFromUtc(DateTime time, TimeZoneInfo zone)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x6000391")]
	[Address(RVA = "0x1A8CF90", Offset = "0x1A8B590", VA = "0x181A8CF90")]
	private static TimeSpan GetUtcOffsetFromUtc(DateTime time, TimeZoneInfo zone, out bool isDaylightSavings)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x6000392")]
	[Address(RVA = "0x1A8D0C0", Offset = "0x1A8B6C0", VA = "0x181A8D0C0")]
	internal static TimeSpan GetUtcOffsetFromUtc(DateTime time, TimeZoneInfo zone, out bool isDaylightSavings, out bool isAmbiguousLocalDst)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x6000393")]
	[Address(RVA = "0x1A8E9E0", Offset = "0x1A8CFE0", VA = "0x181A8E9E0")]
	internal static DateTime TransitionTimeToDateTime(int year, TransitionTime transitionTime)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000394")]
	[Address(RVA = "0x1A91190", Offset = "0x1A8F790", VA = "0x181A91190")]
	private static TimeZoneInfoResult TryGetTimeZone(string id, bool dstDisabled, out TimeZoneInfo value, out Exception e, CachedData cachedData, bool alwaysFallbackToLocalMachine = false)
	{
		return default(TimeZoneInfoResult);
	}

	[Token(Token = "0x6000395")]
	[Address(RVA = "0x1A908A0", Offset = "0x1A8EEA0", VA = "0x181A908A0")]
	private static TimeZoneInfoResult TryGetTimeZoneFromLocalMachine(string id, bool dstDisabled, out TimeZoneInfo value, out Exception e, CachedData cachedData)
	{
		return default(TimeZoneInfoResult);
	}

	[Token(Token = "0x6000396")]
	[Address(RVA = "0x1A914A0", Offset = "0x1A8FAA0", VA = "0x181A914A0")]
	private static void ValidateTimeZoneInfo(string id, TimeSpan baseUtcOffset, AdjustmentRule[] adjustmentRules, out bool adjustmentRulesSupportDst)
	{
	}

	[Token(Token = "0x6000397")]
	[Address(RVA = "0x1A913B0", Offset = "0x1A8F9B0", VA = "0x181A913B0")]
	internal static bool UtcOffsetOutOfRange(TimeSpan offset)
	{
		return default(bool);
	}

	[Token(Token = "0x6000398")]
	[Address(RVA = "0x1A8D480", Offset = "0x1A8BA80", VA = "0x181A8D480")]
	private static TimeSpan GetUtcOffset(TimeSpan baseUtcOffset, AdjustmentRule adjustmentRule)
	{
		return default(TimeSpan);
	}

	[Token(Token = "0x6000399")]
	[Address(RVA = "0x1A8DEA0", Offset = "0x1A8C4A0", VA = "0x181A8DEA0")]
	private static bool IsValidAdjustmentRuleOffest(TimeSpan baseUtcOffset, AdjustmentRule adjustmentRule)
	{
		return default(bool);
	}

	[Token(Token = "0x600039B")]
	[Address(RVA = "0x1A91FF0", Offset = "0x1A905F0", VA = "0x181A91FF0")]
	internal TimeZoneInfo()
	{
	}
}
