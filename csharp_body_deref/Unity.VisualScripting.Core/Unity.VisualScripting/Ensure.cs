// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.Ensure
// Update status: CHANGED in this game update
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
		[Address(RVA = "0x2DA5360", Offset = "0x2DA3960", VA = "0x182DA5360")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600021D")]
		[Address(RVA = "0x2DA53B0", Offset = "0x2DA39B0", VA = "0x182DA53B0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x600021E")]
	[Address(RVA = "0x2DA5040", Offset = "0x2DA3640", VA = "0x182DA5040")]
	public static void Off()
	{
	}

	[Token(Token = "0x600021F")]
	[Address(RVA = "0x2DA50D0", Offset = "0x2DA36D0", VA = "0x182DA50D0")]
	public static void On()
	{
	}

	[Token(Token = "0x6000220")]
	[Address(RVA = "0x2DA5260", Offset = "0x2DA3860", VA = "0x182DA5260")]
	public static EnsureThat That(string paramName)
	{
		return null;
	}

	[Token(Token = "0x6000221")]
	[Address(RVA = "0x2DA5160", Offset = "0x2DA3760", VA = "0x182DA5160")]
	[RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.AfterAssembliesLoaded)]
	private static void ResetStaticsOnLoad()
	{
	}
}
