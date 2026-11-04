// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.AssetBundleCreateRequest
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

[StructLayout((LayoutKind)0)]
[Token(Token = "0x2000003")]
[UnityEngine.Bindings.NativeHeader("Modules/AssetBundle/Public/AssetBundleLoadFromAsyncOperation.h")]
[UnityEngine.Scripting.RequiredByNativeCode]
public class AssetBundleCreateRequest : AsyncOperation
{
	[Token(Token = "0x2000004")]
	internal static class BindingsMarshaller
	{
		[Token(Token = "0x6000010")]
		[Address(RVA = "0x87C0D0", Offset = "0x87A6D0", VA = "0x18087C0D0")]
		public static IntPtr ConvertToNative(AssetBundleCreateRequest assetBundleCreateRequest)
		{
			return default(IntPtr);
		}
	}

	[Token(Token = "0x17000001")]
	public AssetBundle assetBundle
	{
		[Token(Token = "0x600000E")]
		[Address(RVA = "0x2EB14C0", Offset = "0x2EAFAC0", VA = "0x182EB14C0")]
		[UnityEngine.Bindings.NativeMethod("GetAssetBundleBlocking")]
		get
		{
			return null;
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600000F")]
	[Address(RVA = "0x2EB1480", Offset = "0x2EAFA80", VA = "0x182EB1480")]
	private static extern IntPtr get_assetBundle_Injected(IntPtr _unity_self);
}
