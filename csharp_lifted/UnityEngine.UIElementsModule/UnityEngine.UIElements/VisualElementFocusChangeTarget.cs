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
		[Address(RVA = "0x6B6CC30", Offset = "0x6B6BC30", VA = "0x6B6CC30")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60027FD")]
		[Address(RVA = "0x6B6CC40", Offset = "0x6B6BC40", VA = "0x6B6CC40")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x60027F8")]
	[Address(RVA = "0x6B6C9E0", Offset = "0x6B6B9E0", VA = "0x6B6C9E0")]
	public static VisualElementFocusChangeTarget GetPooled(Focusable target)
	{
		return null;
	}

	[Token(Token = "0x60027F9")]
	[Address(RVA = "0x6B6CAA0", Offset = "0x6B6BAA0", VA = "0x6B6CAA0", Slot = "5")]
	protected override void Dispose()
	{
	}

	[Token(Token = "0x60027FA")]
	[Address(RVA = "0x6B6CB30", Offset = "0x6B6BB30", VA = "0x6B6CB30", Slot = "6")]
	internal override void ApplyTo(FocusController focusController, Focusable f)
	{
	}

	[Token(Token = "0x60027FB")]
	[Address(RVA = "0x6B6CB70", Offset = "0x6B6BB70", VA = "0x6B6CB70")]
	public VisualElementFocusChangeTarget()
	{
	}
}
