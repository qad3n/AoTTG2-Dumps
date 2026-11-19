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

[Token(Token = "0x2000316")]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/Texture.h")]
[UnityEngine.Scripting.UsedByNativeCode]
[UnityEngine.Bindings.NativeHeader("Runtime/Graphics/AsyncGPUReadbackManaged.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Shaders/ComputeShader.h")]
public struct AsyncGPUReadbackRequest
{
	[Token(Token = "0x40007DA")]
	[FieldOffset(Offset = "0x0")]
	internal IntPtr m_Ptr;

	[Token(Token = "0x40007DB")]
	[FieldOffset(Offset = "0x8")]
	internal int m_Version;

	[Token(Token = "0x170002F1")]
	public bool done
	{
		[Token(Token = "0x6001290")]
		[Address(RVA = "0x693CA90", Offset = "0x693BA90", VA = "0x693CA90")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002F2")]
	public bool hasError
	{
		[Token(Token = "0x6001291")]
		[Address(RVA = "0x693CAF0", Offset = "0x693BAF0", VA = "0x693CAF0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002F3")]
	public int layerCount
	{
		[Token(Token = "0x6001292")]
		[Address(RVA = "0x693CB50", Offset = "0x693BB50", VA = "0x693CB50")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170002F4")]
	public int layerDataSize
	{
		[Token(Token = "0x6001293")]
		[Address(RVA = "0x693CBB0", Offset = "0x693BBB0", VA = "0x693CBB0")]
		get
		{
			return default(int);
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600128E")]
	[Address(RVA = "0x693CA60", Offset = "0x693BA60", VA = "0x693CA60")]
	public extern void WaitForCompletion();

	[Token(Token = "0x600128F")]
	public NativeArray<T> GetData<T>(int layer = 0) where T : struct
	{
		return default(NativeArray<T>);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001294")]
	[Address(RVA = "0x693CAC0", Offset = "0x693BAC0", VA = "0x693CAC0")]
	private extern bool IsDone();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001295")]
	[Address(RVA = "0x693CB20", Offset = "0x693BB20", VA = "0x693CB20")]
	private extern bool HasError();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001296")]
	[Address(RVA = "0x693CB80", Offset = "0x693BB80", VA = "0x693CB80")]
	private extern int GetLayerCount();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001297")]
	[Address(RVA = "0x693CBE0", Offset = "0x693BBE0", VA = "0x693CBE0")]
	private extern int GetLayerDataSize();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001298")]
	[Address(RVA = "0x693CC10", Offset = "0x693BC10", VA = "0x693CC10")]
	internal extern void SetScriptingCallback(Action<AsyncGPUReadbackRequest> callback);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001299")]
	[Address(RVA = "0x693CC50", Offset = "0x693BC50", VA = "0x693CC50")]
	private extern IntPtr GetDataRaw(int layer);

	[Token(Token = "0x600129A")]
	[Address(RVA = "0x693CC90", Offset = "0x693BC90", VA = "0x693CC90")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void InvokeCallback(Action<AsyncGPUReadbackRequest> callback, AsyncGPUReadbackRequest obj)
	{
	}
}
