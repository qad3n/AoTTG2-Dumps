// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.FocusChangeDirection
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000203")]
public class FocusChangeDirection : IDisposable
{
	[Token(Token = "0x4000726")]
	[FieldOffset(Offset = "0x10")]
	private readonly int m_Value;

	[Token(Token = "0x17000267")]
	public static FocusChangeDirection unspecified
	{
		[Token(Token = "0x6000D14")]
		[Address(RVA = "0x503E9D0", Offset = "0x503E9D0", VA = "0x503E9D0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000268")]
	public static FocusChangeDirection none
	{
		[Token(Token = "0x6000D15")]
		[Address(RVA = "0x503EA40", Offset = "0x503EA40", VA = "0x503EA40")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000269")]
	protected static FocusChangeDirection lastValue
	{
		[Token(Token = "0x6000D16")]
		[Address(RVA = "0x503EAB0", Offset = "0x503EAB0", VA = "0x503EAB0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000D17")]
	[Address(RVA = "0x503EB20", Offset = "0x503EB20", VA = "0x503EB20")]
	protected FocusChangeDirection(int value)
	{
	}

	[Token(Token = "0x6000D18")]
	[Address(RVA = "0x503EB40", Offset = "0x503EB40", VA = "0x503EB40")]
	public static implicit operator int(FocusChangeDirection fcd)
	{
		return default(int);
	}

	[Token(Token = "0x6000D19")]
	[Address(RVA = "0x503EB50", Offset = "0x503EB50", VA = "0x503EB50", Slot = "4")]
	private void System_002EIDisposable_002EDispose()
	{
	}

	[Token(Token = "0x6000D1A")]
	[Address(RVA = "0x503EB70", Offset = "0x503EB70", VA = "0x503EB70", Slot = "5")]
	protected virtual void Dispose()
	{
	}

	[Token(Token = "0x6000D1B")]
	[Address(RVA = "0x503EB80", Offset = "0x503EB80", VA = "0x503EB80", Slot = "6")]
	internal virtual void ApplyTo(FocusController focusController, Focusable f)
	{
	}
}
