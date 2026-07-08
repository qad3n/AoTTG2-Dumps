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
		[Address(RVA = "0x4A81CE0", Offset = "0x4A81CE0", VA = "0x4A81CE0")]
		set;
	}
}
