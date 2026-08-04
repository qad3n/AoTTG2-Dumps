// ==================== AoTTG2 cross-reference ====================
// Type: System.ThrowHelper
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System;

[Token(Token = "0x200013F")]
[System.Diagnostics.StackTraceHidden]
internal static class ThrowHelper
{
	[Token(Token = "0x6000C46")]
	[Address(RVA = "0x3CCC340", Offset = "0x3CCC340", VA = "0x3CCC340")]
	internal static void ThrowArgumentNullException(System.ExceptionArgument argument)
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6000C47")]
	[Address(RVA = "0x3CDC1F0", Offset = "0x3CDC1F0", VA = "0x3CDC1F0")]
	private static Exception CreateArgumentNullException(System.ExceptionArgument argument)
	{
		return null;
	}

	[Token(Token = "0x6000C48")]
	[Address(RVA = "0x3CDC280", Offset = "0x3CDC280", VA = "0x3CDC280")]
	internal static void ThrowArrayTypeMismatchException()
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6000C49")]
	[Address(RVA = "0x3CDC2A0", Offset = "0x3CDC2A0", VA = "0x3CDC2A0")]
	private static Exception CreateArrayTypeMismatchException()
	{
		return null;
	}

	[Token(Token = "0x6000C4A")]
	[Address(RVA = "0x3CDC2E0", Offset = "0x3CDC2E0", VA = "0x3CDC2E0")]
	internal static void ThrowArgumentException_DestinationTooShort()
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6000C4B")]
	[Address(RVA = "0x3CDC300", Offset = "0x3CDC300", VA = "0x3CDC300")]
	private static Exception CreateArgumentException_DestinationTooShort()
	{
		return null;
	}

	[Token(Token = "0x6000C4C")]
	[Address(RVA = "0x3CDC360", Offset = "0x3CDC360", VA = "0x3CDC360")]
	internal static void ThrowIndexOutOfRangeException()
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6000C4D")]
	[Address(RVA = "0x3CDC380", Offset = "0x3CDC380", VA = "0x3CDC380")]
	private static Exception CreateIndexOutOfRangeException()
	{
		return null;
	}

	[Token(Token = "0x6000C4E")]
	[Address(RVA = "0x3CDC3C0", Offset = "0x3CDC3C0", VA = "0x3CDC3C0")]
	internal static void ThrowArgumentOutOfRangeException()
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6000C4F")]
	[Address(RVA = "0x3CDC3E0", Offset = "0x3CDC3E0", VA = "0x3CDC3E0")]
	private static Exception CreateArgumentOutOfRangeException()
	{
		return null;
	}

	[Token(Token = "0x6000C50")]
	[Address(RVA = "0x3CDC420", Offset = "0x3CDC420", VA = "0x3CDC420")]
	internal static void ThrowArgumentOutOfRangeException(System.ExceptionArgument argument)
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6000C51")]
	[Address(RVA = "0x3CDC440", Offset = "0x3CDC440", VA = "0x3CDC440")]
	private static Exception CreateArgumentOutOfRangeException(System.ExceptionArgument argument)
	{
		return null;
	}

	[Token(Token = "0x6000C52")]
	[Address(RVA = "0x3CDC4D0", Offset = "0x3CDC4D0", VA = "0x3CDC4D0")]
	internal static void ThrowNotSupportedException()
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6000C53")]
	[Address(RVA = "0x3CDC4F0", Offset = "0x3CDC4F0", VA = "0x3CDC4F0")]
	private static Exception CreateThrowNotSupportedException()
	{
		return null;
	}

	[Token(Token = "0x6000C54")]
	[Address(RVA = "0x3CDC530", Offset = "0x3CDC530", VA = "0x3CDC530")]
	internal static void ThrowWrongKeyTypeArgumentException(object key, Type targetType)
	{
	}

	[Token(Token = "0x6000C55")]
	[Address(RVA = "0x3CDC600", Offset = "0x3CDC600", VA = "0x3CDC600")]
	internal static void ThrowWrongValueTypeArgumentException(object value, Type targetType)
	{
	}

	[Token(Token = "0x6000C56")]
	[Address(RVA = "0x3CDC6D0", Offset = "0x3CDC6D0", VA = "0x3CDC6D0")]
	internal static void ThrowArgumentException(System.ExceptionResource resource)
	{
	}

	[Token(Token = "0x6000C57")]
	[Address(RVA = "0x3CDC9A0", Offset = "0x3CDC9A0", VA = "0x3CDC9A0")]
	internal static void ThrowArgumentException(System.ExceptionResource resource, System.ExceptionArgument argument)
	{
	}

	[Token(Token = "0x6000C58")]
	[Address(RVA = "0x3CDCB80", Offset = "0x3CDCB80", VA = "0x3CDCB80")]
	internal static void ThrowArgumentOutOfRangeException(System.ExceptionArgument argument, System.ExceptionResource resource)
	{
	}

	[Token(Token = "0x6000C59")]
	[Address(RVA = "0x3CDCC20", Offset = "0x3CDCC20", VA = "0x3CDCC20")]
	internal static void ThrowInvalidOperationException(System.ExceptionResource resource)
	{
	}

	[Token(Token = "0x6000C5A")]
	[Address(RVA = "0x3CDCC80", Offset = "0x3CDCC80", VA = "0x3CDCC80")]
	internal static void ThrowSerializationException(System.ExceptionResource resource)
	{
	}

	[Token(Token = "0x6000C5B")]
	[Address(RVA = "0x3CDCCE0", Offset = "0x3CDCCE0", VA = "0x3CDCCE0")]
	internal static void ThrowNotSupportedException(System.ExceptionResource resource)
	{
	}

	[Token(Token = "0x6000C5C")]
	[Address(RVA = "0x3CDCD40", Offset = "0x3CDCD40", VA = "0x3CDCD40")]
	internal static void ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion()
	{
	}

	[Token(Token = "0x6000C5D")]
	[Address(RVA = "0x3CDCD90", Offset = "0x3CDCD90", VA = "0x3CDCD90")]
	internal static void ThrowInvalidOperationException_InvalidOperation_EnumOpCantHappen()
	{
	}

	[Token(Token = "0x6000C5E")]
	[Address(RVA = "0x3CDCDE0", Offset = "0x3CDCDE0", VA = "0x3CDCDE0")]
	internal static void ThrowInvalidOperationException_InvalidOperation_EnumNotStarted()
	{
	}

	[Token(Token = "0x6000C5F")]
	[Address(RVA = "0x3CDCE30", Offset = "0x3CDCE30", VA = "0x3CDCE30")]
	internal static void ThrowInvalidOperationException_InvalidOperation_EnumEnded()
	{
	}

	[Token(Token = "0x6000C60")]
	[Address(RVA = "0x3CDCE80", Offset = "0x3CDCE80", VA = "0x3CDCE80")]
	internal static void ThrowInvalidOperationException_InvalidOperation_NoValue()
	{
	}

	[Token(Token = "0x6000C61")]
	[Address(RVA = "0x3CDCED0", Offset = "0x3CDCED0", VA = "0x3CDCED0")]
	private static ArgumentOutOfRangeException GetArgumentOutOfRangeException(System.ExceptionArgument argument, string resource)
	{
		return null;
	}

	[Token(Token = "0x6000C62")]
	[Address(RVA = "0x3CDCF30", Offset = "0x3CDCF30", VA = "0x3CDCF30")]
	internal static void ThrowArgumentOutOfRange_IndexException()
	{
	}

	[Token(Token = "0x6000C63")]
	[Address(RVA = "0x3CDCF70", Offset = "0x3CDCF70", VA = "0x3CDCF70")]
	internal static void ThrowIndexArgumentOutOfRange_NeedNonNegNumException()
	{
	}

	[Token(Token = "0x6000C64")]
	[Address(RVA = "0x3CDCFB0", Offset = "0x3CDCFB0", VA = "0x3CDCFB0")]
	internal static void ThrowArgumentException_Argument_InvalidArrayType()
	{
	}

	[Token(Token = "0x6000C65")]
	[Address(RVA = "0x3CDD000", Offset = "0x3CDD000", VA = "0x3CDD000")]
	private static ArgumentException GetAddingDuplicateWithKeyArgumentException(object key)
	{
		return null;
	}

	[Token(Token = "0x6000C66")]
	[Address(RVA = "0x3CDD070", Offset = "0x3CDD070", VA = "0x3CDD070")]
	internal static void ThrowAddingDuplicateWithKeyArgumentException(object key)
	{
	}

	[Token(Token = "0x6000C67")]
	[Address(RVA = "0x3CDD090", Offset = "0x3CDD090", VA = "0x3CDD090")]
	private static KeyNotFoundException GetKeyNotFoundException(object key)
	{
		return null;
	}

	[Token(Token = "0x6000C68")]
	[Address(RVA = "0x3CDD110", Offset = "0x3CDD110", VA = "0x3CDD110")]
	internal static void ThrowKeyNotFoundException(object key)
	{
	}

	[Token(Token = "0x6000C69")]
	[Address(RVA = "0x3CDD120", Offset = "0x3CDD120", VA = "0x3CDD120")]
	internal static void ThrowInvalidTypeWithPointersNotSupported(Type targetType)
	{
	}

	[Token(Token = "0x6000C6A")]
	[Address(RVA = "0x3CDD180", Offset = "0x3CDD180", VA = "0x3CDD180")]
	internal static void ThrowInvalidOperationException_ConcurrentOperationsNotSupported()
	{
	}

	[Token(Token = "0x6000C6B")]
	[Address(RVA = "0x3CDD1B0", Offset = "0x3CDD1B0", VA = "0x3CDD1B0")]
	internal static InvalidOperationException GetInvalidOperationException(string str)
	{
		return null;
	}

	[Token(Token = "0x6000C6C")]
	[Address(RVA = "0x3CDD200", Offset = "0x3CDD200", VA = "0x3CDD200")]
	internal static void ThrowArraySegmentCtorValidationFailedExceptions(Array array, int offset, int count)
	{
	}

	[Token(Token = "0x6000C6D")]
	[Address(RVA = "0x3CDD220", Offset = "0x3CDD220", VA = "0x3CDD220")]
	private static Exception GetArraySegmentCtorValidationFailedException(Array array, int offset, int count)
	{
		return null;
	}

	[Token(Token = "0x6000C6E")]
	[Address(RVA = "0x3CDD4D0", Offset = "0x3CDD4D0", VA = "0x3CDD4D0")]
	private static ArgumentException GetArgumentException(System.ExceptionResource resource)
	{
		return null;
	}

	[Token(Token = "0x6000C6F")]
	[Address(RVA = "0x3CDD3D0", Offset = "0x3CDD3D0", VA = "0x3CDD3D0")]
	private static ArgumentNullException GetArgumentNullException(System.ExceptionArgument argument)
	{
		return null;
	}

	[Token(Token = "0x6000C70")]
	internal static void IfNullAndNullsAreIllegalThenThrow<T>(object value, System.ExceptionArgument argName)
	{
	}

	[Token(Token = "0x6000C71")]
	[Address(RVA = "0x3CDCA10", Offset = "0x3CDCA10", VA = "0x3CDCA10")]
	internal static string GetArgumentName(System.ExceptionArgument argument)
	{
		return null;
	}

	[Token(Token = "0x6000C72")]
	[Address(RVA = "0x3CDD430", Offset = "0x3CDD430", VA = "0x3CDD430")]
	private static ArgumentOutOfRangeException GetArgumentOutOfRangeException(System.ExceptionArgument argument, System.ExceptionResource resource)
	{
		return null;
	}

	[Token(Token = "0x6000C73")]
	[Address(RVA = "0x3CDD560", Offset = "0x3CDD560", VA = "0x3CDD560")]
	internal static void ThrowStartIndexArgumentOutOfRange_ArgumentOutOfRange_Index()
	{
	}

	[Token(Token = "0x6000C74")]
	[Address(RVA = "0x3CDD590", Offset = "0x3CDD590", VA = "0x3CDD590")]
	internal static void ThrowCountArgumentOutOfRange_ArgumentOutOfRange_Count()
	{
	}

	[Token(Token = "0x6000C75")]
	[Address(RVA = "0x3CDC730", Offset = "0x3CDC730", VA = "0x3CDC730")]
	internal static string GetResourceName(System.ExceptionResource resource)
	{
		return null;
	}
}
