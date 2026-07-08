using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine.Networking;

[StructLayout((LayoutKind)0)]
[Token(Token = "0x2000009")]
[UnityEngine.Bindings.NativeHeader("UnityWebRequestScriptingClasses.h")]
[UnityEngine.Scripting.UsedByNativeCode]
[UnityEngine.Bindings.NativeHeader("Modules/UnityWebRequest/Public/UnityWebRequestAsyncOperation.h")]
public class UnityWebRequestAsyncOperation : AsyncOperation
{
	[Token(Token = "0x17000004")]
	public UnityWebRequest webRequest
	{
		[Token(Token = "0x6000036")]
		[Address(RVA = "0x4DDF470", Offset = "0x4DDF470", VA = "0x4DDF470")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000037")]
		[Address(RVA = "0x4DDF480", Offset = "0x4DDF480", VA = "0x4DDF480")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x6000038")]
	[Address(RVA = "0x4DDF490", Offset = "0x4DDF490", VA = "0x4DDF490")]
	public UnityWebRequestAsyncOperation()
	{
	}
}
