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
[UnityEngine.Bindings.NativeHeader("Modules/ParticleSystem/ScriptBindings/ParticleSystemRendererScriptBindings.h")]
[UnityEngine.Bindings.NativeHeader("Modules/ParticleSystem/ParticleSystemRenderer.h")]
[UnityEngine.Bindings.NativeHeader("ParticleSystemScriptingClasses.h")]
public sealed class ParticleSystemRenderer : Renderer
{
	[Token(Token = "0x17000062")]
	public ParticleSystemRenderMode renderMode
	{
		[Token(Token = "0x60000BD")]
		[Address(RVA = "0x69C59A0", Offset = "0x69C49A0", VA = "0x69C59A0")]
		get
		{
			return default(ParticleSystemRenderMode);
		}
		[Token(Token = "0x60000BE")]
		[Address(RVA = "0x69C5A50", Offset = "0x69C4A50", VA = "0x69C5A50")]
		set
		{
		}
	}

	[Token(Token = "0x17000063")]
	public float lengthScale
	{
		[Token(Token = "0x60000BF")]
		[Address(RVA = "0x69C5B10", Offset = "0x69C4B10", VA = "0x69C5B10")]
		set
		{
		}
	}

	[Token(Token = "0x17000064")]
	public float velocityScale
	{
		[Token(Token = "0x60000C0")]
		[Address(RVA = "0x69C5BF0", Offset = "0x69C4BF0", VA = "0x69C5BF0")]
		set
		{
		}
	}

	[Token(Token = "0x17000065")]
	public bool enableGPUInstancing
	{
		[Token(Token = "0x60000C1")]
		[Address(RVA = "0x69C5CD0", Offset = "0x69C4CD0", VA = "0x69C5CD0")]
		set
		{
		}
	}

	[Token(Token = "0x60000C2")]
	[Address(RVA = "0x69C5D90", Offset = "0x69C4D90", VA = "0x69C5D90")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	[UnityEngine.Bindings.FreeFunction(Name = "ParticleSystemRendererScriptBindings::GetMeshes", HasExplicitThis = true)]
	public int GetMeshes([Out][UnityEngine.Bindings.NotNull] Mesh[] meshes)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000C3")]
	[Address(RVA = "0x69C5A20", Offset = "0x69C4A20", VA = "0x69C5A20")]
	private static extern ParticleSystemRenderMode get_renderMode_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000C4")]
	[Address(RVA = "0x69C5AD0", Offset = "0x69C4AD0", VA = "0x69C5AD0")]
	private static extern void set_renderMode_Injected(IntPtr _unity_self, ParticleSystemRenderMode value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000C5")]
	[Address(RVA = "0x69C5BA0", Offset = "0x69C4BA0", VA = "0x69C5BA0")]
	private static extern void set_lengthScale_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000C6")]
	[Address(RVA = "0x69C5C80", Offset = "0x69C4C80", VA = "0x69C5C80")]
	private static extern void set_velocityScale_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000C7")]
	[Address(RVA = "0x69C5D50", Offset = "0x69C4D50", VA = "0x69C5D50")]
	private static extern void set_enableGPUInstancing_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000C8")]
	[Address(RVA = "0x69C5E40", Offset = "0x69C4E40", VA = "0x69C5E40")]
	private static extern int GetMeshes_Injected(IntPtr _unity_self, [Out] Mesh[] meshes);
}
