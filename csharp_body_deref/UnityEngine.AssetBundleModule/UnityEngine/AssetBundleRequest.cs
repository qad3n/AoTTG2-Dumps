// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.AssetBundleRequest
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
[Token(Token = "0x2000006")]
[UnityEngine.Bindings.NativeHeader("Modules/AssetBundle/Public/AssetBundleLoadAssetOperation.h")]
[UnityEngine.Scripting.RequiredByNativeCode]
public class AssetBundleRequest : ResourceRequest
{
	[Token(Token = "0x2000007")]
	internal static class BindingsMarshaller
	{
		[Token(Token = "0x6000014")]
		[Address(RVA = "0x87C0D0", Offset = "0x87A6D0", VA = "0x18087C0D0")]
		public static IntPtr ConvertToNative(AssetBundleRequest request)
		{
			return default(IntPtr);
		}
	}

	[Token(Token = "0x17000002")]
	public new Object asset
	{
		[Token(Token = "0x6000011")]
		[Address(RVA = "0x1B47C10", Offset = "0x1B46210", VA = "0x181B47C10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000003")]
	public Object[] allAssets
	{
		[Token(Token = "0x6000012")]
		[Address(RVA = "0x2EB1590", Offset = "0x2EAFB90", VA = "0x182EB1590")]
		[UnityEngine.Bindings.NativeMethod("GetAllLoadedAssets")]
		get
		{
			return null;
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000013")]
	[Address(RVA = "0x2EB1550", Offset = "0x2EAFB50", VA = "0x182EB1550")]
	private static extern Object[] get_allAssets_Injected(IntPtr _unity_self);
}
