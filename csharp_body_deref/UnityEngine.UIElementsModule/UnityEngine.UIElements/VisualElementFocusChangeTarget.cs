// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.VisualElementFocusChangeTarget
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000549")]
internal class VisualElementFocusChangeTarget : FocusChangeDirection
{
	[Token(Token = "0x40011F0")]
	[FieldOffset(Offset = "0x0")]
	private static readonly ObjectPool<VisualElementFocusChangeTarget> Pool;

	[Token(Token = "0x17000A31")]
	public Focusable target
	{
		[Token(Token = "0x60027FC")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60027FD")]
		[Address(RVA = "0xC8DE30", Offset = "0xC8C430", VA = "0x180C8DE30")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x60027F8")]
	[Address(RVA = "0x3167D20", Offset = "0x3166320", VA = "0x183167D20")]
	public static VisualElementFocusChangeTarget GetPooled(Focusable target)
	{
		return null;
	}

	[Token(Token = "0x60027F9")]
	[Address(RVA = "0x3167C90", Offset = "0x3166290", VA = "0x183167C90", Slot = "5")]
	protected override void Dispose()
	{
	}

	[Token(Token = "0x60027FA")]
	[Address(RVA = "0x3167C40", Offset = "0x3166240", VA = "0x183167C40", Slot = "6")]
	internal override void ApplyTo(FocusController focusController, Focusable f)
	{
	}

	[Token(Token = "0x60027FB")]
	[Address(RVA = "0x3167ED0", Offset = "0x31664D0", VA = "0x183167ED0")]
	public VisualElementFocusChangeTarget()
	{
	}
}
