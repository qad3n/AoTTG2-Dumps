// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Networking.UnityWebRequestAsyncOperation
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

namespace UnityEngine.Networking;

[StructLayout((LayoutKind)0)]
[Token(Token = "0x200000C")]
[UnityEngine.Scripting.UsedByNativeCode]
[UnityEngine.Bindings.NativeHeader("Modules/UnityWebRequest/Public/UnityWebRequestAsyncOperation.h")]
[UnityEngine.Bindings.NativeHeader("UnityWebRequestScriptingClasses.h")]
public class UnityWebRequestAsyncOperation : AsyncOperation
{
	[Token(Token = "0x200000D")]
	internal static class BindingsMarshaller
	{
		[Token(Token = "0x6000043")]
		[Address(RVA = "0x3308FE0", Offset = "0x33075E0", VA = "0x183308FE0")]
		public static UnityWebRequestAsyncOperation ConvertToManaged(IntPtr ptr)
		{
			return null;
		}
	}

	[Token(Token = "0x17000005")]
	public UnityWebRequest webRequest
	{
		[Token(Token = "0x6000041")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000042")]
		[Address(RVA = "0xACE2F0", Offset = "0xACC8F0", VA = "0x180ACE2F0")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x6000040")]
	[Address(RVA = "0x330A110", Offset = "0x3308710", VA = "0x18330A110")]
	private UnityWebRequestAsyncOperation(IntPtr ptr)
	{
	}
}
