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
		[Token(Token = "0x600000D")]
		[Address(RVA = "0x4A80260", Offset = "0x4A80260", VA = "0x4A80260")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000003")]
	public extern Object[] allAssets
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600000E")]
		[Address(RVA = "0x4A80280", Offset = "0x4A80280", VA = "0x4A80280")]
		[UnityEngine.Bindings.NativeMethod("GetAllLoadedAssets")]
		get;
	}
}
