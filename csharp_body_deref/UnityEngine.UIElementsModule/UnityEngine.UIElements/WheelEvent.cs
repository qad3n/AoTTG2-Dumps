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
		[Address(RVA = "0x4D0BD70", Offset = "0x4D0BD70", VA = "0x4D0BD70")]
		[CompilerGenerated]
		get
		{
			return default(Vector3);
		}
		[Token(Token = "0x6000B63")]
		[Address(RVA = "0x4D0BD90", Offset = "0x4D0BD90", VA = "0x4D0BD90")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6000B61")]
	[Address(RVA = "0x4D0BCA0", Offset = "0x4D0BCA0", VA = "0x4D0BCA0")]
	static WheelEvent()
	{
	}

	[Token(Token = "0x6000B64")]
	[Address(RVA = "0x4D0BDA0", Offset = "0x4D0BDA0", VA = "0x4D0BDA0")]
	public new static WheelEvent GetPooled(Event systemEvent)
	{
		return null;
	}

	[Token(Token = "0x6000B65")]
	[Address(RVA = "0x4D0BE10", Offset = "0x4D0BE10", VA = "0x4D0BE10")]
	internal static WheelEvent GetPooled(Vector3 delta, Vector3 mousePosition, EventModifiers modifiers = EventModifiers.None)
	{
		return null;
	}

	[Token(Token = "0x6000B66")]
	[Address(RVA = "0x4D0BED0", Offset = "0x4D0BED0", VA = "0x4D0BED0")]
	internal static WheelEvent GetPooled(Vector3 delta, IPointerEvent pointerEvent)
	{
		return null;
	}

	[Token(Token = "0x6000B67")]
	[Address(RVA = "0x4D0BF40", Offset = "0x4D0BF40", VA = "0x4D0BF40", Slot = "13")]
	protected override void Init()
	{
	}

	[Token(Token = "0x6000B68")]
	[Address(RVA = "0x4D0BFC0", Offset = "0x4D0BFC0", VA = "0x4D0BFC0")]
	private void LocalInit()
	{
	}

	[Token(Token = "0x6000B69")]
	[Address(RVA = "0x4D0C010", Offset = "0x4D0C010", VA = "0x4D0C010")]
	public WheelEvent()
	{
	}

	[Token(Token = "0x6000B6A")]
	[Address(RVA = "0x4D0C090", Offset = "0x4D0C090", VA = "0x4D0C090", Slot = "10")]
	internal override void Dispatch(BaseVisualElementPanel panel)
	{
	}
}
