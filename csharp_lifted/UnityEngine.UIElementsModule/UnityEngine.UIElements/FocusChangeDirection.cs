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

[Token(Token = "0x2000257")]
public class FocusChangeDirection : IDisposable
{
	[Token(Token = "0x4000897")]
	[FieldOffset(Offset = "0x10")]
	private readonly int m_Value;

	[Token(Token = "0x1700030C")]
	public static FocusChangeDirection unspecified
	{
		[Token(Token = "0x6000F94")]
		[Address(RVA = "0x6C75890", Offset = "0x6C74890", VA = "0x6C75890")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700030D")]
	public static FocusChangeDirection none
	{
		[Token(Token = "0x6000F95")]
		[Address(RVA = "0x6C75900", Offset = "0x6C74900", VA = "0x6C75900")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700030E")]
	protected static FocusChangeDirection lastValue
	{
		[Token(Token = "0x6000F96")]
		[Address(RVA = "0x6C75970", Offset = "0x6C74970", VA = "0x6C75970")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000F97")]
	[Address(RVA = "0x6C759E0", Offset = "0x6C749E0", VA = "0x6C759E0")]
	protected FocusChangeDirection(int value)
	{
	}

	[Token(Token = "0x6000F98")]
	[Address(RVA = "0x6C75A00", Offset = "0x6C74A00", VA = "0x6C75A00")]
	public static implicit operator int(FocusChangeDirection fcd)
	{
		return default(int);
	}

	[Token(Token = "0x6000F99")]
	[Address(RVA = "0x6C75A10", Offset = "0x6C74A10", VA = "0x6C75A10", Slot = "4")]
	private void System_002EIDisposable_002EDispose()
	{
	}

	[Token(Token = "0x6000F9A")]
	[Address(RVA = "0x6C75A30", Offset = "0x6C74A30", VA = "0x6C75A30", Slot = "5")]
	protected virtual void Dispose()
	{
	}

	[Token(Token = "0x6000F9B")]
	[Address(RVA = "0x6C75A40", Offset = "0x6C74A40", VA = "0x6C75A40", Slot = "6")]
	internal virtual void ApplyTo(FocusController focusController, Focusable f)
	{
	}
}
