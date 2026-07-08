using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x200000C")]
[UnityEngine.Bindings.NativeHeader("Modules/ParticleSystem/ParticleSystemRenderer.h")]
[UnityEngine.Bindings.NativeHeader("ParticleSystemScriptingClasses.h")]
[RequireComponent(typeof(Transform))]
[UnityEngine.Bindings.NativeHeader("Modules/ParticleSystem/ScriptBindings/ParticleSystemRendererScriptBindings.h")]
public sealed class ParticleSystemRenderer : Renderer
{
	[Token(Token = "0x600004A")]
	[Address(RVA = "0x4B4BCF0", Offset = "0x4B4BCF0", VA = "0x4B4BCF0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	[UnityEngine.Bindings.FreeFunction(Name = "ParticleSystemRendererScriptBindings::GetMeshes", HasExplicitThis = true)]
	public int GetMeshes([Out][UnityEngine.Bindings.NotNull("ArgumentNullException")] Mesh[] meshes)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600004B")]
	[Address(RVA = "0x4B4BD90", Offset = "0x4B4BD90", VA = "0x4B4BD90")]
	private static extern int GetMeshes_Injected(IntPtr _unity_self, [Out] Mesh[] meshes);
}
