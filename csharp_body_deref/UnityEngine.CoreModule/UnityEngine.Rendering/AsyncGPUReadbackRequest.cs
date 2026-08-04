// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.AsyncGPUReadbackRequest
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Collections;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine.Rendering;

[Token(Token = "0x200029F")]
[UnityEngine.Bindings.NativeHeader("Runtime/Shaders/ComputeShader.h")]
[UnityEngine.Scripting.UsedByNativeCode]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/Texture.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/AsyncGPUReadbackManaged.h")]
public struct AsyncGPUReadbackRequest
{
	[Token(Token = "0x40006E4")]
	[FieldOffset(Offset = "0x0")]
	internal IntPtr m_Ptr;

	[Token(Token = "0x40006E5")]
	[FieldOffset(Offset = "0x8")]
	internal int m_Version;

	[Token(Token = "0x1700025F")]
	public bool done
	{
		[Token(Token = "0x6000E12")]
		[Address(RVA = "0x4E18390", Offset = "0x4E18390", VA = "0x4E18390")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000260")]
	public bool hasError
	{
		[Token(Token = "0x6000E13")]
		[Address(RVA = "0x4E183F0", Offset = "0x4E183F0", VA = "0x4E183F0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000261")]
	public int layerCount
	{
		[Token(Token = "0x6000E14")]
		[Address(RVA = "0x4E18450", Offset = "0x4E18450", VA = "0x4E18450")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000262")]
	public int layerDataSize
	{
		[Token(Token = "0x6000E15")]
		[Address(RVA = "0x4E184B0", Offset = "0x4E184B0", VA = "0x4E184B0")]
		get
		{
			return default(int);
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E10")]
	[Address(RVA = "0x4E18360", Offset = "0x4E18360", VA = "0x4E18360")]
	public extern void WaitForCompletion();

	[Token(Token = "0x6000E11")]
	public NativeArray<T> GetData<T>(int layer = 0) where T : struct
	{
		return default(NativeArray<T>);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E16")]
	[Address(RVA = "0x4E183C0", Offset = "0x4E183C0", VA = "0x4E183C0")]
	private extern bool IsDone();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E17")]
	[Address(RVA = "0x4E18420", Offset = "0x4E18420", VA = "0x4E18420")]
	private extern bool HasError();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E18")]
	[Address(RVA = "0x4E18480", Offset = "0x4E18480", VA = "0x4E18480")]
	private extern int GetLayerCount();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E19")]
	[Address(RVA = "0x4E184E0", Offset = "0x4E184E0", VA = "0x4E184E0")]
	private extern int GetLayerDataSize();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E1A")]
	[Address(RVA = "0x4E18510", Offset = "0x4E18510", VA = "0x4E18510")]
	internal extern void SetScriptingCallback(Action<AsyncGPUReadbackRequest> callback);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E1B")]
	[Address(RVA = "0x4E18550", Offset = "0x4E18550", VA = "0x4E18550")]
	private extern IntPtr GetDataRaw(int layer);
}
