// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.DebugActionState
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000091")]
internal class DebugActionState
{
	[Token(Token = "0x2000092")]
	private enum DebugActionKeyType
	{
		[Token(Token = "0x4000208")]
		Button,
		[Token(Token = "0x4000209")]
		Axis,
		[Token(Token = "0x400020A")]
		Key
	}

	[Token(Token = "0x40001FF")]
	[FieldOffset(Offset = "0x10")]
	private DebugActionKeyType m_Type;

	[Token(Token = "0x4000200")]
	[FieldOffset(Offset = "0x18")]
	private string[] m_PressedButtons;

	[Token(Token = "0x4000201")]
	[FieldOffset(Offset = "0x20")]
	private string m_PressedAxis;

	[Token(Token = "0x4000202")]
	[FieldOffset(Offset = "0x28")]
	private KeyCode[] m_PressedKeys;

	[Token(Token = "0x4000203")]
	[FieldOffset(Offset = "0x30")]
	private bool[] m_TriggerPressedUp;

	[Token(Token = "0x4000204")]
	[FieldOffset(Offset = "0x38")]
	private float m_Timer;

	[Token(Token = "0x17000067")]
	internal bool runningAction
	{
		[Token(Token = "0x6000671")]
		[Address(RVA = "0xDA7C70", Offset = "0xDA6270", VA = "0x180DA7C70")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000672")]
		[Address(RVA = "0xDA7C80", Offset = "0xDA6280", VA = "0x180DA7C80")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000068")]
	internal float actionState
	{
		[Token(Token = "0x6000673")]
		[Address(RVA = "0xE8F6E0", Offset = "0xE8DCE0", VA = "0x180E8F6E0")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000674")]
		[Address(RVA = "0xE8F730", Offset = "0xE8DD30", VA = "0x180E8F730")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6000675")]
	[Address(RVA = "0x2AD4020", Offset = "0x2AD2620", VA = "0x182AD4020")]
	private void Trigger(int triggerCount, float state)
	{
	}

	[Token(Token = "0x6000676")]
	[Address(RVA = "0x2AD3EE0", Offset = "0x2AD24E0", VA = "0x182AD3EE0")]
	public void TriggerWithButton(string[] buttons, float state)
	{
	}

	[Token(Token = "0x6000677")]
	[Address(RVA = "0x2AD3E90", Offset = "0x2AD2490", VA = "0x182AD3E90")]
	public void TriggerWithAxis(string axis, float state)
	{
	}

	[Token(Token = "0x6000678")]
	[Address(RVA = "0x2AD3F80", Offset = "0x2AD2580", VA = "0x182AD3F80")]
	public void TriggerWithKey(KeyCode[] keys, float state)
	{
	}

	[Token(Token = "0x6000679")]
	[Address(RVA = "0x2AD3E70", Offset = "0x2AD2470", VA = "0x182AD3E70")]
	private void Reset()
	{
	}

	[Token(Token = "0x600067A")]
	[Address(RVA = "0x2AD40E0", Offset = "0x2AD26E0", VA = "0x182AD40E0")]
	public void Update(DebugActionDesc desc)
	{
	}

	[Token(Token = "0x600067B")]
	[Address(RVA = "0x2AD42D0", Offset = "0x2AD28D0", VA = "0x182AD42D0")]
	public DebugActionState()
	{
	}
}
