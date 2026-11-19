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
		[Address(RVA = "0x64D0A40", Offset = "0x64CFA40", VA = "0x64D0A40")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000672")]
		[Address(RVA = "0x64D0A50", Offset = "0x64CFA50", VA = "0x64D0A50")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000068")]
	internal float actionState
	{
		[Token(Token = "0x6000673")]
		[Address(RVA = "0x64D0A60", Offset = "0x64CFA60", VA = "0x64D0A60")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000674")]
		[Address(RVA = "0x64D0A70", Offset = "0x64CFA70", VA = "0x64D0A70")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6000675")]
	[Address(RVA = "0x64D0A80", Offset = "0x64CFA80", VA = "0x64D0A80")]
	private void Trigger(int triggerCount, float state)
	{
	}

	[Token(Token = "0x6000676")]
	[Address(RVA = "0x64CCB70", Offset = "0x64CBB70", VA = "0x64CCB70")]
	public void TriggerWithButton(string[] buttons, float state)
	{
	}

	[Token(Token = "0x6000677")]
	[Address(RVA = "0x64CCC70", Offset = "0x64CBC70", VA = "0x64CCC70")]
	public void TriggerWithAxis(string axis, float state)
	{
	}

	[Token(Token = "0x6000678")]
	[Address(RVA = "0x64CCD20", Offset = "0x64CBD20", VA = "0x64CCD20")]
	public void TriggerWithKey(KeyCode[] keys, float state)
	{
	}

	[Token(Token = "0x6000679")]
	[Address(RVA = "0x64D0B90", Offset = "0x64CFB90", VA = "0x64D0B90")]
	private void Reset()
	{
	}

	[Token(Token = "0x600067A")]
	[Address(RVA = "0x64CCE70", Offset = "0x64CBE70", VA = "0x64CCE70")]
	public void Update(DebugActionDesc desc)
	{
	}

	[Token(Token = "0x600067B")]
	[Address(RVA = "0x64CC6A0", Offset = "0x64CB6A0", VA = "0x64CC6A0")]
	public DebugActionState()
	{
	}
}
