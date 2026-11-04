// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Jobs.EarlyInitHelpers
// Update status: NEW in this game update
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
	[Address(RVA = "0x299B950", Offset = "0x2999F50", VA = "0x18299B950")]
	static EarlyInitHelpers()
	{
	}

	[Token(Token = "0x6000004")]
	[Address(RVA = "0x299B770", Offset = "0x2999D70", VA = "0x18299B770")]
	public static void FlushEarlyInits()
	{
	}

	[Token(Token = "0x6000005")]
	[Address(RVA = "0x299B600", Offset = "0x2999C00", VA = "0x18299B600")]
	public static void AddEarlyInitFunction(EarlyInitFunction func)
	{
	}

	[Token(Token = "0x6000006")]
	[Address(RVA = "0x299B8E0", Offset = "0x2999EE0", VA = "0x18299B8E0")]
	public static void JobReflectionDataCreationFailed(Exception ex)
	{
	}

	[Token(Token = "0x6000007")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public EarlyInitHelpers()
	{
	}
}
