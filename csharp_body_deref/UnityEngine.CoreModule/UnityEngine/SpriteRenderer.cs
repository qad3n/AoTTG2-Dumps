using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Events;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x20001A8")]
[UnityEngine.Bindings.NativeType("Runtime/Graphics/Mesh/SpriteRenderer.h")]
[RequireComponent(typeof(Transform))]
public sealed class SpriteRenderer : Renderer
{
	[Token(Token = "0x4000615")]
	[FieldOffset(Offset = "0x18")]
	private UnityEvent<SpriteRenderer> m_SpriteChangeEvent;

	[Token(Token = "0x6000C70")]
	[Address(RVA = "0x4AE4570", Offset = "0x4AE4570", VA = "0x4AE4570")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private void InvokeSpriteChanged()
	{
	}
}
