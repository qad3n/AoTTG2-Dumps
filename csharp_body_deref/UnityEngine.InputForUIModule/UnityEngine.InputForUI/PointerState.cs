// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.InputForUI.PointerState
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.IntegerTime;

namespace UnityEngine.InputForUI;

[Token(Token = "0x200002C")]
internal struct PointerState
{
	[Token(Token = "0x40000DA")]
	[FieldOffset(Offset = "0x4")]
	private PointerEvent.ButtonsState _buttonsState;

	[Token(Token = "0x40000E0")]
	[FieldOffset(Offset = "0x0")]
	private static readonly DiscreteTime kClickDelay;

	[Token(Token = "0x17000043")]
	public PointerEvent.Button LastPressedButton
	{
		[Token(Token = "0x60000D5")]
		[Address(RVA = "0x57AED0", Offset = "0x5794D0", VA = "0x18057AED0")]
		[CompilerGenerated]
		readonly get
		{
			return default(PointerEvent.Button);
		}
		[Token(Token = "0x60000D6")]
		[Address(RVA = "0x57AF10", Offset = "0x579510", VA = "0x18057AF10")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000044")]
	public PointerEvent.ButtonsState ButtonsState
	{
		[Token(Token = "0x60000D7")]
		[Address(RVA = "0x57AEC0", Offset = "0x5794C0", VA = "0x18057AEC0")]
		get
		{
			return default(PointerEvent.ButtonsState);
		}
	}

	[Token(Token = "0x17000045")]
	public DiscreteTime NextPressTime
	{
		[Token(Token = "0x60000D8")]
		[Address(RVA = "0xADC170", Offset = "0xADA770", VA = "0x180ADC170")]
		[CompilerGenerated]
		readonly get
		{
			return default(DiscreteTime);
		}
		[Token(Token = "0x60000D9")]
		[Address(RVA = "0x1B943D0", Offset = "0x1B929D0", VA = "0x181B943D0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000046")]
	public int ClickCount
	{
		[Token(Token = "0x60000DA")]
		[Address(RVA = "0x546860", Offset = "0x544E60", VA = "0x180546860")]
		[CompilerGenerated]
		readonly get
		{
			return default(int);
		}
		[Token(Token = "0x60000DB")]
		[Address(RVA = "0x560B20", Offset = "0x55F120", VA = "0x180560B20")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000047")]
	public Vector2 LastPosition
	{
		[Token(Token = "0x60000DC")]
		[Address(RVA = "0x155C620", Offset = "0x155AC20", VA = "0x18155C620")]
		[CompilerGenerated]
		readonly get
		{
			return default(Vector2);
		}
		[Token(Token = "0x60000DD")]
		[Address(RVA = "0x2FC3080", Offset = "0x2FC1680", VA = "0x182FC3080")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000048")]
	public int LastDisplayIndex
	{
		[Token(Token = "0x60000DE")]
		[Address(RVA = "0xD23EC0", Offset = "0xD224C0", VA = "0x180D23EC0")]
		[CompilerGenerated]
		readonly get
		{
			return default(int);
		}
		[Token(Token = "0x60000DF")]
		[Address(RVA = "0xD23F80", Offset = "0xD22580", VA = "0x180D23F80")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000049")]
	public bool LastPositionValid
	{
		[Token(Token = "0x60000E0")]
		[Address(RVA = "0xF40050", Offset = "0xF3E650", VA = "0x180F40050")]
		[CompilerGenerated]
		readonly get
		{
			return default(bool);
		}
		[Token(Token = "0x60000E1")]
		[Address(RVA = "0x138BAA0", Offset = "0x138A0A0", VA = "0x18138BAA0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x60000E2")]
	[Address(RVA = "0x2FC2CD0", Offset = "0x2FC12D0", VA = "0x182FC2CD0")]
	public void OnButtonDown(DiscreteTime currentTime, PointerEvent.Button button)
	{
	}

	[Token(Token = "0x60000E3")]
	[Address(RVA = "0x2FC2E00", Offset = "0x2FC1400", VA = "0x182FC2E00")]
	public void OnButtonUp(DiscreteTime currentTime, PointerEvent.Button button)
	{
	}

	[Token(Token = "0x60000E4")]
	[Address(RVA = "0x2FC2C20", Offset = "0x2FC1220", VA = "0x182FC2C20")]
	public void OnButtonChange(DiscreteTime currentTime, PointerEvent.Button button, bool previousState, bool newState)
	{
	}

	[Token(Token = "0x60000E5")]
	[Address(RVA = "0x2FC2E80", Offset = "0x2FC1480", VA = "0x182FC2E80")]
	public void OnMove(DiscreteTime currentTime, Vector2 position, int displayIndex)
	{
	}

	[Token(Token = "0x60000E6")]
	[Address(RVA = "0x2FC2F10", Offset = "0x2FC1510", VA = "0x182FC2F10")]
	public void Reset()
	{
	}
}
