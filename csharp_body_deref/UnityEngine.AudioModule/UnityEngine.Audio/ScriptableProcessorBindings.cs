// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Audio.ScriptableProcessorBindings
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Unity.Audio;
using UnityEngine.Bindings;

namespace UnityEngine.Audio;

[Token(Token = "0x2000029")]
[UnityEngine.Bindings.NativeHeader("Modules/Audio/Public/ScriptableProcessors/ScriptBindings/ScriptableProcessor.bindings.h")]
internal static class ScriptableProcessorBindings
{
	[Token(Token = "0x6000093")]
	[Address(RVA = "0x2EB6B90", Offset = "0x2EB5190", VA = "0x182EB6B90")]
	public unsafe static bool CheckProcessorExists(Handle handle, ControlHeader* control)
	{
		return default(bool);
	}

	[Token(Token = "0x6000094")]
	[Address(RVA = "0x2EB6B40", Offset = "0x2EB5140", VA = "0x182EB6B40")]
	[UnityEngine.Bindings.NativeMethod(Name = "audio::CheckProcessorExists", IsFreeFunction = true)]
	private unsafe static bool CheckProcessorExistsInternal(Handle handle, void* control)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000095")]
	[Address(RVA = "0x2EB6AF0", Offset = "0x2EB50F0", VA = "0x182EB6AF0")]
	private unsafe static extern bool CheckProcessorExistsInternal_Injected([In] ref Handle handle, void* control);
}
