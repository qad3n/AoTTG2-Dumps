// ==================== AoTTG2 cross-reference ====================
// Type: System.Globalization.Calendar
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Globalization;

[Serializable]
[Token(Token = "0x200058C")]
[ComVisible(true)]
public abstract class Calendar : ICloneable
{
	[Token(Token = "0x4001708")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	internal int m_currentEraValue;

	[Token(Token = "0x4001709")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x14")]
	[OptionalField(VersionAdded = 2)]
	private bool m_isReadOnly;

	[Token(Token = "0x400170A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	internal int twoDigitYearMax;

	[Token(Token = "0x17000616")]
	[ComVisible(false)]
	public virtual DateTime MinSupportedDateTime
	{
		[Token(Token = "0x6002976")]
		[Address(RVA = "0x1A96BD0", Offset = "0x1A951D0", VA = "0x181A96BD0", Slot = "5")]
		get
		{
			return default(DateTime);
		}
	}

	[Token(Token = "0x17000617")]
	[ComVisible(false)]
	public virtual DateTime MaxSupportedDateTime
	{
		[Token(Token = "0x6002977")]
		[Address(RVA = "0x1A96B80", Offset = "0x1A95180", VA = "0x181A96B80", Slot = "6")]
		get
		{
			return default(DateTime);
		}
	}

	[Token(Token = "0x17000618")]
	internal virtual int ID
	{
		[Token(Token = "0x6002979")]
		[Address(RVA = "0x1A5F1E0", Offset = "0x1A5D7E0", VA = "0x181A5F1E0", Slot = "7")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000619")]
	internal virtual int BaseCalendarID
	{
		[Token(Token = "0x600297A")]
		[Address(RVA = "0x1A96900", Offset = "0x1A94F00", VA = "0x181A96900", Slot = "8")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700061A")]
	[ComVisible(false)]
	public bool IsReadOnly
	{
		[Token(Token = "0x600297B")]
		[Address(RVA = "0x1537420", Offset = "0x1535A20", VA = "0x181537420")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700061B")]
	internal virtual int CurrentEraValue
	{
		[Token(Token = "0x6002980")]
		[Address(RVA = "0x1A96920", Offset = "0x1A94F20", VA = "0x181A96920", Slot = "10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700061C")]
	public abstract int[] Eras
	{
		[Token(Token = "0x6002986")]
		get;
	}

	[Token(Token = "0x1700061D")]
	public virtual int TwoDigitYearMax
	{
		[Token(Token = "0x6002992")]
		[Address(RVA = "0x8FB390", Offset = "0x8F9990", VA = "0x1808FB390", Slot = "28")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6002993")]
		[Address(RVA = "0x1A96C20", Offset = "0x1A95220", VA = "0x181A96C20", Slot = "29")]
		set
		{
		}
	}

	[Token(Token = "0x6002978")]
	[Address(RVA = "0x1A968E0", Offset = "0x1A94EE0", VA = "0x181A968E0")]
	protected Calendar()
	{
	}

	[Token(Token = "0x600297C")]
	[Address(RVA = "0x1A96110", Offset = "0x1A94710", VA = "0x181A96110", Slot = "9")]
	[ComVisible(false)]
	public virtual object Clone()
	{
		return null;
	}

	[Token(Token = "0x600297D")]
	[Address(RVA = "0x1A96380", Offset = "0x1A94980", VA = "0x181A96380")]
	[ComVisible(false)]
	public static Calendar ReadOnly(Calendar calendar)
	{
		return null;
	}

	[Token(Token = "0x600297E")]
	[Address(RVA = "0x1A96860", Offset = "0x1A94E60", VA = "0x181A96860")]
	internal void VerifyWritable()
	{
	}

	[Token(Token = "0x600297F")]
	[Address(RVA = "0x1A78710", Offset = "0x1A76D10", VA = "0x181A78710")]
	internal void SetReadOnlyState(bool readOnly)
	{
	}

	[Token(Token = "0x6002981")]
	public abstract int GetDayOfMonth(DateTime time);

	[Token(Token = "0x6002982")]
	public abstract DayOfWeek GetDayOfWeek(DateTime time);

	[Token(Token = "0x6002983")]
	public abstract int GetDaysInMonth(int year, int month, int era);

	[Token(Token = "0x6002984")]
	public abstract int GetDaysInYear(int year, int era);

	[Token(Token = "0x6002985")]
	public abstract int GetEra(DateTime time);

	[Token(Token = "0x6002987")]
	public abstract int GetMonth(DateTime time);

	[Token(Token = "0x6002988")]
	public abstract int GetMonthsInYear(int year, int era);

	[Token(Token = "0x6002989")]
	public abstract int GetYear(DateTime time);

	[Token(Token = "0x600298A")]
	[Address(RVA = "0x1A961E0", Offset = "0x1A947E0", VA = "0x181A961E0", Slot = "20")]
	public virtual bool IsLeapYear(int year)
	{
		return default(bool);
	}

	[Token(Token = "0x600298B")]
	public abstract bool IsLeapYear(int year, int era);

	[Token(Token = "0x600298C")]
	[Address(RVA = "0x1A96610", Offset = "0x1A94C10", VA = "0x181A96610", Slot = "22")]
	public virtual DateTime ToDateTime(int year, int month, int day, int hour, int minute, int second, int millisecond)
	{
		return default(DateTime);
	}

	[Token(Token = "0x600298D")]
	public abstract DateTime ToDateTime(int year, int month, int day, int hour, int minute, int second, int millisecond, int era);

	[Token(Token = "0x600298E")]
	[Address(RVA = "0x1A96780", Offset = "0x1A94D80", VA = "0x181A96780", Slot = "24")]
	internal virtual bool TryToDateTime(int year, int month, int day, int hour, int minute, int second, int millisecond, int era, out DateTime result)
	{
		return default(bool);
	}

	[Token(Token = "0x600298F")]
	[Address(RVA = "0x1A962F0", Offset = "0x1A948F0", VA = "0x181A962F0", Slot = "25")]
	internal virtual bool IsValidYear(int year, int era)
	{
		return default(bool);
	}

	[Token(Token = "0x6002990")]
	[Address(RVA = "0x1A96280", Offset = "0x1A94880", VA = "0x181A96280", Slot = "26")]
	internal virtual bool IsValidMonth(int year, int month, int era)
	{
		return default(bool);
	}

	[Token(Token = "0x6002991")]
	[Address(RVA = "0x1A96200", Offset = "0x1A94800", VA = "0x181A96200", Slot = "27")]
	internal virtual bool IsValidDay(int year, int month, int day, int era)
	{
		return default(bool);
	}

	[Token(Token = "0x6002994")]
	[Address(RVA = "0x1A96670", Offset = "0x1A94C70", VA = "0x181A96670", Slot = "30")]
	public virtual int ToFourDigitYear(int year)
	{
		return default(int);
	}

	[Token(Token = "0x6002995")]
	[Address(RVA = "0x1A96460", Offset = "0x1A94A60", VA = "0x181A96460")]
	internal static long TimeToTicks(int hour, int minute, int second, int millisecond)
	{
		return default(long);
	}

	[Token(Token = "0x6002996")]
	[Address(RVA = "0x1A96190", Offset = "0x1A94790", VA = "0x181A96190")]
	internal static int GetSystemTwoDigitYearSetting(int CalID, int defaultYearValue)
	{
		return default(int);
	}
}
