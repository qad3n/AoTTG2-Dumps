// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.Ensure
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine;

namespace Unity.VisualScripting;

[Token(Token = "0x2000053")]
public static class Ensure
{
	[Token(Token = "0x4000064")]
	[FieldOffset(Offset = "0x0")]
	private static readonly EnsureThat instance;

	[Token(Token = "0x17000079")]
	public static bool IsActive
	{
		[Token(Token = "0x600021C")]
		[Address(RVA = "0x67935B0", Offset = "0x67925B0", VA = "0x67935B0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600021D")]
		[Address(RVA = "0x6793620", Offset = "0x6792620", VA = "0x6793620")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x600021E")]
	[Address(RVA = "0x6793670", Offset = "0x6792670", VA = "0x6793670")]
	public static void Off()
	{
	}

	[Token(Token = "0x600021F")]
	[Address(RVA = "0x6793720", Offset = "0x6792720", VA = "0x6793720")]
	public static void On()
	{
	}

	[Token(Token = "0x6000220")]
	[Address(RVA = "0x6792170", Offset = "0x6791170", VA = "0x6792170")]
	public static EnsureThat That(string paramName)
	{
		return null;
	}

	[Token(Token = "0x6000221")]
	[Address(RVA = "0x67937D0", Offset = "0x67927D0", VA = "0x67937D0")]
	[RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.AfterAssembliesLoaded)]
	private static void ResetStaticsOnLoad()
	{
	}
}
