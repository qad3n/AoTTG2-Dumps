// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngineInternal.DisplayInternal
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngineInternal;

[Token(Token = "0x2000005")]
internal class DisplayInternal
{
	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000004")]
	[Address(RVA = "0x2EC43B0", Offset = "0x2EC29B0", VA = "0x182EC43B0")]
	[UnityEngine.Bindings.FreeFunction("UnityDisplayManager_PrimaryDisplayIndex")]
	internal static extern int PrimaryDisplayIndex();

	[Token(Token = "0x6000005")]
	[Address(RVA = "0x2EC4310", Offset = "0x2EC2910", VA = "0x182EC4310")]
	internal static bool IsASecondaryDisplayIndex(int displayIndex)
	{
		return default(bool);
	}
}
