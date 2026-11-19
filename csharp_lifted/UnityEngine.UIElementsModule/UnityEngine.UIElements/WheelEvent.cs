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

[Token(Token = "0x20001F6")]
public class WheelEvent : MouseEventBase<WheelEvent>
{
	[Token(Token = "0x17000292")]
	public Vector3 delta
	{
		[Token(Token = "0x6000D83")]
		[Address(RVA = "0x6C690D0", Offset = "0x6C680D0", VA = "0x6C690D0")]
		[CompilerGenerated]
		get
		{
			return default(Vector3);
		}
		[Token(Token = "0x6000D84")]
		[Address(RVA = "0x6C690F0", Offset = "0x6C680F0", VA = "0x6C690F0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6000D82")]
	[Address(RVA = "0x6C69000", Offset = "0x6C68000", VA = "0x6C69000")]
	static WheelEvent()
	{
	}

	[Token(Token = "0x6000D85")]
	[Address(RVA = "0x6C69100", Offset = "0x6C68100", VA = "0x6C69100")]
	public new static WheelEvent GetPooled(Event systemEvent)
	{
		return null;
	}

	[Token(Token = "0x6000D86")]
	[Address(RVA = "0x6C69170", Offset = "0x6C68170", VA = "0x6C69170")]
	internal static WheelEvent GetPooled(Vector3 delta, Vector3 mousePosition, EventModifiers modifiers = EventModifiers.None)
	{
		return null;
	}

	[Token(Token = "0x6000D87")]
	[Address(RVA = "0x6C69230", Offset = "0x6C68230", VA = "0x6C69230")]
	internal static WheelEvent GetPooled(Vector3 delta, IPointerEvent pointerEvent)
	{
		return null;
	}

	[Token(Token = "0x6000D88")]
	[Address(RVA = "0x6C692A0", Offset = "0x6C682A0", VA = "0x6C692A0", Slot = "13")]
	protected override void Init()
	{
	}

	[Token(Token = "0x6000D89")]
	[Address(RVA = "0x6C69350", Offset = "0x6C68350", VA = "0x6C69350")]
	private void LocalInit()
	{
	}

	[Token(Token = "0x6000D8A")]
	[Address(RVA = "0x6C693D0", Offset = "0x6C683D0", VA = "0x6C693D0")]
	public WheelEvent()
	{
	}

	[Token(Token = "0x6000D8B")]
	[Address(RVA = "0x6C69480", Offset = "0x6C68480", VA = "0x6C69480", Slot = "10")]
	internal override void Dispatch(BaseVisualElementPanel panel)
	{
	}
}
