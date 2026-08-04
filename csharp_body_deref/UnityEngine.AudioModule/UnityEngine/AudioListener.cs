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

[Token(Token = "0x2000009")]
[UnityEngine.Bindings.StaticAccessor("AudioListenerBindings", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
[RequireComponent(typeof(Transform))]
public sealed class AudioListener : AudioBehaviour
{
	[Token(Token = "0x17000007")]
	public static extern float volume
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600002C")]
		[Address(RVA = "0x4DA9500", Offset = "0x4DA9500", VA = "0x4DA9500")]
		set;
	}
}
