// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.AudioListener
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine;

[Token(Token = "0x200000B")]
[RequireComponent(typeof(Transform))]
[UnityEngine.Bindings.StaticAccessor("AudioListenerBindings", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
public sealed class AudioListener : AudioBehaviour
{
	[Token(Token = "0x1700000A")]
	public static extern float volume
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000032")]
		[Address(RVA = "0x2EB3760", Offset = "0x2EB1D60", VA = "0x182EB3760")]
		set;
	}
}
