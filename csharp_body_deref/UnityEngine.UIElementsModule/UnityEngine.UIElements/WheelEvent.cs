// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.WheelEvent
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x20001AF")]
public class WheelEvent : MouseEventBase<WheelEvent>
{
	[Token(Token = "0x17000212")]
	public Vector3 delta
	{
		[Token(Token = "0x6000B62")]
		[Address(RVA = "0x50336A0", Offset = "0x50336A0", VA = "0x50336A0")]
		[CompilerGenerated]
		get
		{
			return default(Vector3);
		}
		[Token(Token = "0x6000B63")]
		[Address(RVA = "0x50336C0", Offset = "0x50336C0", VA = "0x50336C0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6000B61")]
	[Address(RVA = "0x50335D0", Offset = "0x50335D0", VA = "0x50335D0")]
	static WheelEvent()
	{
	}

	[Token(Token = "0x6000B64")]
	[Address(RVA = "0x50336D0", Offset = "0x50336D0", VA = "0x50336D0")]
	public new static WheelEvent GetPooled(Event systemEvent)
	{
		return null;
	}

	[Token(Token = "0x6000B65")]
	[Address(RVA = "0x5033740", Offset = "0x5033740", VA = "0x5033740")]
	internal static WheelEvent GetPooled(Vector3 delta, Vector3 mousePosition, EventModifiers modifiers = EventModifiers.None)
	{
		return null;
	}

	[Token(Token = "0x6000B66")]
	[Address(RVA = "0x5033800", Offset = "0x5033800", VA = "0x5033800")]
	internal static WheelEvent GetPooled(Vector3 delta, IPointerEvent pointerEvent)
	{
		return null;
	}

	[Token(Token = "0x6000B67")]
	[Address(RVA = "0x5033870", Offset = "0x5033870", VA = "0x5033870", Slot = "13")]
	protected override void Init()
	{
	}

	[Token(Token = "0x6000B68")]
	[Address(RVA = "0x50338F0", Offset = "0x50338F0", VA = "0x50338F0")]
	private void LocalInit()
	{
	}

	[Token(Token = "0x6000B69")]
	[Address(RVA = "0x5033940", Offset = "0x5033940", VA = "0x5033940")]
	public WheelEvent()
	{
	}

	[Token(Token = "0x6000B6A")]
	[Address(RVA = "0x50339C0", Offset = "0x50339C0", VA = "0x50339C0", Slot = "10")]
	internal override void Dispatch(BaseVisualElementPanel panel)
	{
	}
}
