// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Networking.DownloadHandlerFile
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Unity.Collections;
using UnityEngine.Bindings;

namespace UnityEngine.Networking;

[StructLayout((LayoutKind)0)]
[Token(Token = "0x200000A")]
[UnityEngine.Bindings.NativeHeader("Modules/UnityWebRequest/Public/DownloadHandler/DownloadHandlerVFS.h")]
public sealed class DownloadHandlerFile : DownloadHandler
{
	[Token(Token = "0x200000B")]
	internal new static class BindingsMarshaller
	{
		[Token(Token = "0x600003B")]
		[Address(RVA = "0x6D1BF30", Offset = "0x6D1AF30", VA = "0x6D1BF30")]
		public static IntPtr ConvertToNative(DownloadHandlerFile handler)
		{
			return default(IntPtr);
		}
	}

	[Token(Token = "0x17000003")]
	public bool removeFileOnAbort
	{
		[Token(Token = "0x6000038")]
		[Address(RVA = "0x6D1BE90", Offset = "0x6D1AE90", VA = "0x6D1BE90")]
		set
		{
		}
	}

	[Token(Token = "0x6000033")]
	[Address(RVA = "0x6D1BB20", Offset = "0x6D1AB20", VA = "0x6D1BB20")]
	[UnityEngine.Bindings.NativeThrows]
	private static IntPtr Create([UnityEngine.Bindings.UnityMarshalAs(UnityEngine.Bindings.NativeType.ScriptingObjectPtr)] DownloadHandlerFile obj, string path, bool append)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000034")]
	[Address(RVA = "0x6D1BCD0", Offset = "0x6D1ACD0", VA = "0x6D1BCD0")]
	private void InternalCreateVFS(string path, bool append)
	{
	}

	[Token(Token = "0x6000035")]
	[Address(RVA = "0x6D1BD60", Offset = "0x6D1AD60", VA = "0x6D1BD60")]
	public DownloadHandlerFile(string path)
	{
	}

	[Token(Token = "0x6000036")]
	[Address(RVA = "0x6D1BDF0", Offset = "0x6D1ADF0", VA = "0x6D1BDF0", Slot = "6")]
	protected override NativeArray<byte> GetNativeData()
	{
		return default(NativeArray<byte>);
	}

	[Token(Token = "0x6000037")]
	[Address(RVA = "0x6D1BE40", Offset = "0x6D1AE40", VA = "0x6D1BE40", Slot = "7")]
	protected override string GetText()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000039")]
	[Address(RVA = "0x6D1BC90", Offset = "0x6D1AC90", VA = "0x6D1BC90")]
	private static extern IntPtr Create_Injected(DownloadHandlerFile obj, ref UnityEngine.Bindings.ManagedSpanWrapper path, bool append);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600003A")]
	[Address(RVA = "0x6D1BEF0", Offset = "0x6D1AEF0", VA = "0x6D1BEF0")]
	private static extern void set_removeFileOnAbort_Injected(IntPtr _unity_self, bool value);
}
