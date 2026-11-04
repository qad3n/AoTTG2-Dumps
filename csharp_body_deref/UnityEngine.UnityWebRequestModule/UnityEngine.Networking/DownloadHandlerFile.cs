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
		[Token(Token = "0x600003F")]
		[Address(RVA = "0x87C0D0", Offset = "0x87A6D0", VA = "0x18087C0D0")]
		public static IntPtr ConvertToNative(DownloadHandlerFile handler)
		{
			return default(IntPtr);
		}
	}

	[Token(Token = "0x17000004")]
	public bool removeFileOnAbort
	{
		[Token(Token = "0x600003C")]
		[Address(RVA = "0x3309820", Offset = "0x3307E20", VA = "0x183309820")]
		set
		{
		}
	}

	[Token(Token = "0x6000036")]
	[Address(RVA = "0x3309400", Offset = "0x3307A00", VA = "0x183309400")]
	[UnityEngine.Bindings.NativeThrows]
	private static IntPtr Create([UnityEngine.Bindings.UnityMarshalAs(UnityEngine.Bindings.NativeType.ScriptingObjectPtr)] DownloadHandlerFile obj, string path, bool append)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000037")]
	[Address(RVA = "0x33096A0", Offset = "0x3307CA0", VA = "0x1833096A0")]
	private void InternalCreateVFS(string path, bool append)
	{
	}

	[Token(Token = "0x6000038")]
	[Address(RVA = "0x3309730", Offset = "0x3307D30", VA = "0x183309730")]
	public DownloadHandlerFile(string path)
	{
	}

	[Token(Token = "0x6000039")]
	[Address(RVA = "0x3309600", Offset = "0x3307C00", VA = "0x183309600", Slot = "6")]
	protected override NativeArray<byte> GetNativeData()
	{
		return default(NativeArray<byte>);
	}

	[Token(Token = "0x600003A")]
	[Address(RVA = "0x33095B0", Offset = "0x3307BB0", VA = "0x1833095B0", Slot = "7")]
	protected override byte[] GetData()
	{
		return null;
	}

	[Token(Token = "0x600003B")]
	[Address(RVA = "0x3309650", Offset = "0x3307C50", VA = "0x183309650", Slot = "8")]
	protected override string GetText()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600003D")]
	[Address(RVA = "0x33093A0", Offset = "0x33079A0", VA = "0x1833093A0")]
	private static extern IntPtr Create_Injected(DownloadHandlerFile obj, ref UnityEngine.Bindings.ManagedSpanWrapper path, bool append);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600003E")]
	[Address(RVA = "0x33097D0", Offset = "0x3307DD0", VA = "0x1833097D0")]
	private static extern void set_removeFileOnAbort_Injected(IntPtr _unity_self, bool value);
}
