// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.ParticleSystemRenderer
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x200001C")]
[RequireComponent(typeof(Transform))]
[UnityEngine.Bindings.NativeHeader("ParticleSystemScriptingClasses.h")]
[UnityEngine.Bindings.NativeHeader("Modules/ParticleSystem/ParticleSystemRenderer.h")]
[UnityEngine.Bindings.NativeHeader("Modules/ParticleSystem/ScriptBindings/ParticleSystemRendererScriptBindings.h")]
public sealed class ParticleSystemRenderer : Renderer
{
	[Token(Token = "0x17000062")]
	public ParticleSystemRenderMode renderMode
	{
		[Token(Token = "0x60000BD")]
		[Address(RVA = "0x2FC9690", Offset = "0x2FC7C90", VA = "0x182FC9690")]
		set
		{
		}
	}

	[Token(Token = "0x17000063")]
	public float lengthScale
	{
		[Token(Token = "0x60000BE")]
		[Address(RVA = "0x2FC95C0", Offset = "0x2FC7BC0", VA = "0x182FC95C0")]
		set
		{
		}
	}

	[Token(Token = "0x17000064")]
	public float velocityScale
	{
		[Token(Token = "0x60000BF")]
		[Address(RVA = "0x2FC9770", Offset = "0x2FC7D70", VA = "0x182FC9770")]
		set
		{
		}
	}

	[Token(Token = "0x60000C0")]
	[Address(RVA = "0x2FC94C0", Offset = "0x2FC7AC0", VA = "0x182FC94C0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	[UnityEngine.Bindings.FreeFunction(Name = "ParticleSystemRendererScriptBindings::GetMeshes", HasExplicitThis = true)]
	public int GetMeshes([Out][UnityEngine.Bindings.NotNull] Mesh[] meshes)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000C1")]
	[Address(RVA = "0x2FC9650", Offset = "0x2FC7C50", VA = "0x182FC9650")]
	private static extern void set_renderMode_Injected(IntPtr _unity_self, ParticleSystemRenderMode value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000C2")]
	[Address(RVA = "0x2FC9570", Offset = "0x2FC7B70", VA = "0x182FC9570")]
	private static extern void set_lengthScale_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000C3")]
	[Address(RVA = "0x2FC9720", Offset = "0x2FC7D20", VA = "0x182FC9720")]
	private static extern void set_velocityScale_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000C4")]
	[Address(RVA = "0x2FC9470", Offset = "0x2FC7A70", VA = "0x182FC9470")]
	private static extern int GetMeshes_Injected(IntPtr _unity_self, [Out] Mesh[] meshes);
}
