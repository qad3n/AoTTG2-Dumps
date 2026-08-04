// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.AssetBundleRequest
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine;

[StructLayout((LayoutKind)0)]
[Token(Token = "0x2000005")]
[UnityEngine.Bindings.NativeHeader("Modules/AssetBundle/Public/AssetBundleLoadAssetOperation.h")]
[UnityEngine.Scripting.RequiredByNativeCode]
public class AssetBundleRequest : ResourceRequest
{
	[Token(Token = "0x17000002")]
	public new Object asset
	{
		[Token(Token = "0x600000E")]
		[Address(RVA = "0x4DA7A80", Offset = "0x4DA7A80", VA = "0x4DA7A80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000003")]
	public extern Object[] allAssets
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600000F")]
		[Address(RVA = "0x4DA7AA0", Offset = "0x4DA7AA0", VA = "0x4DA7AA0")]
		[UnityEngine.Bindings.NativeMethod("GetAllLoadedAssets")]
		get;
	}
}
