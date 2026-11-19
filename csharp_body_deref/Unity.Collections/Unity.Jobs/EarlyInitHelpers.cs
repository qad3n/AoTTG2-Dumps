// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Jobs.EarlyInitHelpers
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace Unity.Jobs;

[Token(Token = "0x2000004")]
public class EarlyInitHelpers
{
	[Token(Token = "0x2000005")]
	public delegate void EarlyInitFunction();

	[Token(Token = "0x4000001")]
	[FieldOffset(Offset = "0x0")]
	private static List<EarlyInitFunction> s_PendingDelegates;

	[Token(Token = "0x6000003")]
	[Address(RVA = "0x63598C0", Offset = "0x63588C0", VA = "0x63598C0")]
	static EarlyInitHelpers()
	{
	}

	[Token(Token = "0x6000004")]
	[Address(RVA = "0x63598D0", Offset = "0x63588D0", VA = "0x63598D0")]
	public static void FlushEarlyInits()
	{
	}

	[Token(Token = "0x6000005")]
	[Address(RVA = "0x6359AA0", Offset = "0x6358AA0", VA = "0x6359AA0")]
	public static void AddEarlyInitFunction(EarlyInitFunction func)
	{
	}

	[Token(Token = "0x6000006")]
	[Address(RVA = "0x6359C40", Offset = "0x6358C40", VA = "0x6359C40")]
	public static void JobReflectionDataCreationFailed(Exception ex)
	{
	}

	[Token(Token = "0x6000007")]
	[Address(RVA = "0x6359CA0", Offset = "0x6358CA0", VA = "0x6359CA0")]
	public EarlyInitHelpers()
	{
	}
}
