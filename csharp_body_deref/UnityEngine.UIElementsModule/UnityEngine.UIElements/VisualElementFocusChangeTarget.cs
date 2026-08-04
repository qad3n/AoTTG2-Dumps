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

[Token(Token = "0x200046F")]
internal class VisualElementFocusChangeTarget : FocusChangeDirection
{
	[Token(Token = "0x4000D53")]
	[FieldOffset(Offset = "0x0")]
	private static readonly ObjectPool<VisualElementFocusChangeTarget> Pool;

	[Token(Token = "0x17000749")]
	public Focusable target
	{
		[Token(Token = "0x6001B99")]
		[Address(RVA = "0x4F76570", Offset = "0x4F76570", VA = "0x4F76570")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6001B9A")]
		[Address(RVA = "0x4F76580", Offset = "0x4F76580", VA = "0x4F76580")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6001B95")]
	[Address(RVA = "0x4F76320", Offset = "0x4F76320", VA = "0x4F76320")]
	public static VisualElementFocusChangeTarget GetPooled(Focusable target)
	{
		return null;
	}

	[Token(Token = "0x6001B96")]
	[Address(RVA = "0x4F763E0", Offset = "0x4F763E0", VA = "0x4F763E0", Slot = "5")]
	protected override void Dispose()
	{
	}

	[Token(Token = "0x6001B97")]
	[Address(RVA = "0x4F76470", Offset = "0x4F76470", VA = "0x4F76470", Slot = "6")]
	internal override void ApplyTo(FocusController focusController, Focusable f)
	{
	}

	[Token(Token = "0x6001B98")]
	[Address(RVA = "0x4F764B0", Offset = "0x4F764B0", VA = "0x4F764B0")]
	public VisualElementFocusChangeTarget()
	{
	}
}
