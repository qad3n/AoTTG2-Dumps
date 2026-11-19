// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.InputForUI.PointerState
// Update status: unchanged since the previous dump
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
		[Address(RVA = "0x69BD8C0", Offset = "0x69BC8C0", VA = "0x69BD8C0")]
		[CompilerGenerated]
		readonly get
		{
			return default(PointerEvent.Button);
		}
		[Token(Token = "0x60000D6")]
		[Address(RVA = "0x69BD8D0", Offset = "0x69BC8D0", VA = "0x69BD8D0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000044")]
	public PointerEvent.ButtonsState ButtonsState
	{
		[Token(Token = "0x60000D7")]
		[Address(RVA = "0x69BD8E0", Offset = "0x69BC8E0", VA = "0x69BD8E0")]
		get
		{
			return default(PointerEvent.ButtonsState);
		}
	}

	[Token(Token = "0x17000045")]
	public DiscreteTime NextPressTime
	{
		[Token(Token = "0x60000D8")]
		[Address(RVA = "0x69BD8F0", Offset = "0x69BC8F0", VA = "0x69BD8F0")]
		[CompilerGenerated]
		readonly get
		{
			return default(DiscreteTime);
		}
		[Token(Token = "0x60000D9")]
		[Address(RVA = "0x69BD900", Offset = "0x69BC900", VA = "0x69BD900")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000046")]
	public int ClickCount
	{
		[Token(Token = "0x60000DA")]
		[Address(RVA = "0x69BD910", Offset = "0x69BC910", VA = "0x69BD910")]
		[CompilerGenerated]
		readonly get
		{
			return default(int);
		}
		[Token(Token = "0x60000DB")]
		[Address(RVA = "0x69BD920", Offset = "0x69BC920", VA = "0x69BD920")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000047")]
	public Vector2 LastPosition
	{
		[Token(Token = "0x60000DC")]
		[Address(RVA = "0x69BD930", Offset = "0x69BC930", VA = "0x69BD930")]
		[CompilerGenerated]
		readonly get
		{
			return default(Vector2);
		}
		[Token(Token = "0x60000DD")]
		[Address(RVA = "0x69BD940", Offset = "0x69BC940", VA = "0x69BD940")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000048")]
	public int LastDisplayIndex
	{
		[Token(Token = "0x60000DE")]
		[Address(RVA = "0x69BD950", Offset = "0x69BC950", VA = "0x69BD950")]
		[CompilerGenerated]
		readonly get
		{
			return default(int);
		}
		[Token(Token = "0x60000DF")]
		[Address(RVA = "0x69BD960", Offset = "0x69BC960", VA = "0x69BD960")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000049")]
	public bool LastPositionValid
	{
		[Token(Token = "0x60000E0")]
		[Address(RVA = "0x69BD970", Offset = "0x69BC970", VA = "0x69BD970")]
		[CompilerGenerated]
		readonly get
		{
			return default(bool);
		}
		[Token(Token = "0x60000E1")]
		[Address(RVA = "0x69BD980", Offset = "0x69BC980", VA = "0x69BD980")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x60000E2")]
	[Address(RVA = "0x69BC6B0", Offset = "0x69BB6B0", VA = "0x69BC6B0")]
	public void OnButtonDown(DiscreteTime currentTime, PointerEvent.Button button)
	{
	}

	[Token(Token = "0x60000E3")]
	[Address(RVA = "0x69BC830", Offset = "0x69BB830", VA = "0x69BC830")]
	public void OnButtonUp(DiscreteTime currentTime, PointerEvent.Button button)
	{
	}

	[Token(Token = "0x60000E4")]
	[Address(RVA = "0x69BCA40", Offset = "0x69BBA40", VA = "0x69BCA40")]
	public void OnButtonChange(DiscreteTime currentTime, PointerEvent.Button button, bool previousState, bool newState)
	{
	}

	[Token(Token = "0x60000E5")]
	[Address(RVA = "0x69BC990", Offset = "0x69BB990", VA = "0x69BC990")]
	public void OnMove(DiscreteTime currentTime, Vector2 position, int displayIndex)
	{
	}

	[Token(Token = "0x60000E6")]
	[Address(RVA = "0x69B9920", Offset = "0x69B8920", VA = "0x69B9920")]
	public void Reset()
	{
	}
}
