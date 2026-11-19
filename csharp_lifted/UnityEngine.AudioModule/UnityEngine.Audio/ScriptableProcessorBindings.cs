// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Audio.ScriptableProcessorBindings
// Update status: unchanged since the previous dump
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

[Token(Token = "0x200002E")]
[UnityEngine.Bindings.NativeHeader("Modules/Audio/Public/ScriptableProcessors/ScriptBindings/ScriptableProcessor.bindings.h")]
internal static class ScriptableProcessorBindings
{
	[Token(Token = "0x6000097")]
	[Address(RVA = "0x68B1BD0", Offset = "0x68B0BD0", VA = "0x68B1BD0")]
	public unsafe static bool CheckProcessorExists(Handle handle, ControlHeader* control)
	{
		return default(bool);
	}

	[Token(Token = "0x6000098")]
	[Address(RVA = "0x68B2670", Offset = "0x68B1670", VA = "0x68B2670")]
	[UnityEngine.Bindings.NativeMethod(Name = "audio::CheckProcessorExists", IsFreeFunction = true)]
	private unsafe static bool CheckProcessorExistsInternal(Handle handle, void* control)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000099")]
	[Address(RVA = "0x68B26B0", Offset = "0x68B16B0", VA = "0x68B26B0")]
	private unsafe static extern bool CheckProcessorExistsInternal_Injected([In] ref Handle handle, void* control);
}
