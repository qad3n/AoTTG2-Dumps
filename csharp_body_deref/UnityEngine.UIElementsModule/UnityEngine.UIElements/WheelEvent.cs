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
		[Address(RVA = "0x2101A80", Offset = "0x2100080", VA = "0x182101A80")]
		[CompilerGenerated]
		get
		{
			return default(Vector3);
		}
		[Token(Token = "0x6000D84")]
		[Address(RVA = "0x3272380", Offset = "0x3270980", VA = "0x183272380")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6000D82")]
	[Address(RVA = "0x3272250", Offset = "0x3270850", VA = "0x183272250")]
	static WheelEvent()
	{
	}

	[Token(Token = "0x6000D85")]
	[Address(RVA = "0x3271FC0", Offset = "0x32705C0", VA = "0x183271FC0")]
	public new static WheelEvent GetPooled(Event systemEvent)
	{
		return null;
	}

	[Token(Token = "0x6000D86")]
	[Address(RVA = "0x32720C0", Offset = "0x32706C0", VA = "0x1832720C0")]
	internal static WheelEvent GetPooled(Vector3 delta, Vector3 mousePosition, EventModifiers modifiers = EventModifiers.None)
	{
		return null;
	}

	[Token(Token = "0x6000D87")]
	[Address(RVA = "0x3272050", Offset = "0x3270650", VA = "0x183272050")]
	internal static WheelEvent GetPooled(Vector3 delta, IPointerEvent pointerEvent)
	{
		return null;
	}

	[Token(Token = "0x6000D88")]
	[Address(RVA = "0x3272180", Offset = "0x3270780", VA = "0x183272180", Slot = "13")]
	protected override void Init()
	{
	}

	[Token(Token = "0x6000D89")]
	[Address(RVA = "0x32721D0", Offset = "0x32707D0", VA = "0x1832721D0")]
	private void LocalInit()
	{
	}

	[Token(Token = "0x6000D8A")]
	[Address(RVA = "0x3272330", Offset = "0x3270930", VA = "0x183272330")]
	public WheelEvent()
	{
	}

	[Token(Token = "0x6000D8B")]
	[Address(RVA = "0x3271E60", Offset = "0x3270460", VA = "0x183271E60", Slot = "10")]
	internal override void Dispatch(BaseVisualElementPanel panel)
	{
	}
}
