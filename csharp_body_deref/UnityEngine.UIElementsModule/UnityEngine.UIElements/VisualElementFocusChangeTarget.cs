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
		[Address(RVA = "0x4C4EC40", Offset = "0x4C4EC40", VA = "0x4C4EC40")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6001B9A")]
		[Address(RVA = "0x4C4EC50", Offset = "0x4C4EC50", VA = "0x4C4EC50")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6001B95")]
	[Address(RVA = "0x4C4E9F0", Offset = "0x4C4E9F0", VA = "0x4C4E9F0")]
	public static VisualElementFocusChangeTarget GetPooled(Focusable target)
	{
		return null;
	}

	[Token(Token = "0x6001B96")]
	[Address(RVA = "0x4C4EAB0", Offset = "0x4C4EAB0", VA = "0x4C4EAB0", Slot = "5")]
	protected override void Dispose()
	{
	}

	[Token(Token = "0x6001B97")]
	[Address(RVA = "0x4C4EB40", Offset = "0x4C4EB40", VA = "0x4C4EB40", Slot = "6")]
	internal override void ApplyTo(FocusController focusController, Focusable f)
	{
	}

	[Token(Token = "0x6001B98")]
	[Address(RVA = "0x4C4EB80", Offset = "0x4C4EB80", VA = "0x4C4EB80")]
	public VisualElementFocusChangeTarget()
	{
	}
}
