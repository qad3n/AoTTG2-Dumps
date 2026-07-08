using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x20000C1")]
internal class DebugActionState
{
	[Token(Token = "0x20000C2")]
	private enum DebugActionKeyType
	{
		[Token(Token = "0x40002D0")]
		Button,
		[Token(Token = "0x40002D1")]
		Axis,
		[Token(Token = "0x40002D2")]
		Key
	}

	[Token(Token = "0x40002C7")]
	[FieldOffset(Offset = "0x10")]
	private DebugActionKeyType m_Type;

	[Token(Token = "0x40002C8")]
	[FieldOffset(Offset = "0x18")]
	private string[] m_PressedButtons;

	[Token(Token = "0x40002C9")]
	[FieldOffset(Offset = "0x20")]
	private string m_PressedAxis;

	[Token(Token = "0x40002CA")]
	[FieldOffset(Offset = "0x28")]
	private KeyCode[] m_PressedKeys;

	[Token(Token = "0x40002CB")]
	[FieldOffset(Offset = "0x30")]
	private bool[] m_TriggerPressedUp;

	[Token(Token = "0x40002CC")]
	[FieldOffset(Offset = "0x38")]
	private float m_Timer;

	[Token(Token = "0x17000089")]
	internal bool runningAction
	{
		[Token(Token = "0x6000734")]
		[Address(RVA = "0x4880950", Offset = "0x4880950", VA = "0x4880950")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000735")]
		[Address(RVA = "0x4880960", Offset = "0x4880960", VA = "0x4880960")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700008A")]
	internal float actionState
	{
		[Token(Token = "0x6000736")]
		[Address(RVA = "0x4880970", Offset = "0x4880970", VA = "0x4880970")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000737")]
		[Address(RVA = "0x4880980", Offset = "0x4880980", VA = "0x4880980")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6000738")]
	[Address(RVA = "0x4880990", Offset = "0x4880990", VA = "0x4880990")]
	private void Trigger(int triggerCount, float state)
	{
	}

	[Token(Token = "0x6000739")]
	[Address(RVA = "0x4880A40", Offset = "0x4880A40", VA = "0x4880A40")]
	public void TriggerWithButton(string[] buttons, float state)
	{
	}

	[Token(Token = "0x600073A")]
	[Address(RVA = "0x4880B50", Offset = "0x4880B50", VA = "0x4880B50")]
	public void TriggerWithAxis(string axis, float state)
	{
	}

	[Token(Token = "0x600073B")]
	[Address(RVA = "0x4880C20", Offset = "0x4880C20", VA = "0x4880C20")]
	public void TriggerWithKey(KeyCode[] keys, float state)
	{
	}

	[Token(Token = "0x600073C")]
	[Address(RVA = "0x4880D30", Offset = "0x4880D30", VA = "0x4880D30")]
	private void Reset()
	{
	}

	[Token(Token = "0x600073D")]
	[Address(RVA = "0x4880D50", Offset = "0x4880D50", VA = "0x4880D50")]
	public void Update(DebugActionDesc desc)
	{
	}

	[Token(Token = "0x600073E")]
	[Address(RVA = "0x4881000", Offset = "0x4881000", VA = "0x4881000")]
	public DebugActionState()
	{
	}
}
