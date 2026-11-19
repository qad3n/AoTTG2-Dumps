// ==================== AoTTG2 cross-reference ====================
// Type: ApplicationManagers.ApplicationVersion
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/ApplicationManagers/ApplicationVersion.c
// Prior real C# source (older reference): Assets/Scripts/ApplicationManagers/ApplicationVersion.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Net;
using Il2CppDummyDll;

namespace ApplicationManagers;

[Token(Token = "0x200096F")]
internal class ApplicationVersion
{
	[Token(Token = "0x4002F6E")]
	[FieldOffset(Offset = "0x0")]
	public static bool UseServerHash;

	[Token(Token = "0x4002F6F")]
	[FieldOffset(Offset = "0x8")]
	public static Func<NetworkCredential> VersionProvider;

	[Token(Token = "0x4002F70")]
	[FieldOffset(Offset = "0x10")]
	public static Func<string, string> HashProvider;

	[Token(Token = "0x6005848")]
	[Address(RVA = "0x5D0A290", Offset = "0x5D09290", VA = "0x5D0A290")]
	public static NetworkCredential GetVersion()
	{
		// Lifted from source/cpp/ApplicationManagers/ApplicationVersion.c (ApplicationManagers.ApplicationVersion$$GetVersion): clean
		uint uVar1;
		Func<NetworkCredential> pSVar2;
		NetworkCredential pSVar3;

		if (Il2CppMethodInitialized_075483e6 == false) {
			Il2CppMethodInitialized_075483e6 = true;
			uVar1 = (typeof(ApplicationVersion)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(ApplicationVersion)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			pSVar2 = ApplicationVersion.VersionProvider;
		}
		else {
			pSVar2 = *(Func<NetworkCredential>*)((long)(typeof(ApplicationVersion)).static_fields + 8);
		}
		if (pSVar2 == null) {
			pSVar3 = new NetworkCredential("TestVersion", "TestVersion");
			return pSVar3;
		}
		if (((typeof(ApplicationVersion))._2).cctor_finished_or_no_cctor == 0) {
			pSVar2 = ApplicationVersion.VersionProvider;
			if (pSVar2 == null) {
				throw new NullReferenceException();
			}
		}
		pSVar3 = (NetworkCredential)(*(code)pSVar2.invoke_impl)(pSVar2.method_code,pSVar2.method);
		return pSVar3;
	}

	[Token(Token = "0x6005849")]
	[Address(RVA = "0x5D0A390", Offset = "0x5D09390", VA = "0x5D0A390")]
	public static string GetHashCode(string key)
	{
		// Lifted from source/cpp/ApplicationManagers/ApplicationVersion.c (ApplicationManagers.ApplicationVersion$$GetHashCode): 1 lines keep C-only constructs
		uint uVar1;
		code *vtableDispatch;
		Func<string, string> pSVar2;
		String pSVar3;

		if (Il2CppMethodInitialized_075483e7 == false) {
			Il2CppMethodInitialized_075483e7 = true;
			uVar1 = (typeof(ApplicationVersion)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(ApplicationVersion)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			pSVar2 = ApplicationVersion.HashProvider;
		}
		else {
			pSVar2 = *(Func<string, string>*)((long)(typeof(ApplicationVersion)).static_fields + 0x10);
		}
		if (pSVar2 == null) {
			return (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		if (((typeof(ApplicationVersion))._2).cctor_finished_or_no_cctor == 0) {
			pSVar2 = ApplicationVersion.HashProvider;
			if (pSVar2 == null) {
				throw new NullReferenceException();
			}
		}
		vtableDispatch = (code)pSVar2.invoke_impl;
		pSVar3 = (String)(*vtableDispatch)(pSVar2.method_code,key,pSVar2.method,vtableDispatch);
		return pSVar3;
	}

	[Token(Token = "0x600584A")]
	[Address(RVA = "0x5D0A460", Offset = "0x5D09460", VA = "0x5D0A460")]
	public static string GetHashKey(string key)
	{
		// Lifted from source/cpp/ApplicationManagers/ApplicationVersion.c (ApplicationManagers.ApplicationVersion$$GetHashKey): clean
		sbyte cVar1;
		uint uVar2;

		if (Il2CppMethodInitialized_075483e8 == false) {
			Il2CppMethodInitialized_075483e8 = true;
			uVar2 = (typeof(ApplicationVersion)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = (typeof(ApplicationVersion)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
			cVar1 = ApplicationVersion.UseServerHash;
		}
		else {
			cVar1 = *(sbyte)(typeof(ApplicationVersion)).static_fields;
		}
		if (cVar1 == false) {
			key = (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		return key;
	}

	[Token(Token = "0x600584B")]
	[Address(RVA = "0x5D0A4F0", Offset = "0x5D094F0", VA = "0x5D0A4F0")]
	public static string GetSessionID()
	{
		// Lifted from source/cpp/ApplicationManagers/ApplicationVersion.c (ApplicationManagers.ApplicationVersion$$GetSessionID): clean
		String pSVar1;

		pSVar1 = SystemInfo.deviceUniqueIdentifier;
		pSVar1 = String.Concat("eWire7HpInEhOO7r", pSVar1);
		return pSVar1;
	}

	[Token(Token = "0x600584C")]
	[Address(RVA = "0x5D0A530", Offset = "0x5D09530", VA = "0x5D0A530")]
	static ApplicationVersion()
	{
		// Lifted from source/cpp/ApplicationManagers/ApplicationVersion.c (ApplicationManagers.ApplicationVersion$$.cctor): 2 lines keep C-only constructs
		ApplicationManagers_ApplicationVersion_StaticFields pAVar1;
		Func<NetworkCredential> __this;
		Func<string, string> __this_00;

		ApplicationVersion.UseServerHash = true;
		__this = new Func<NetworkCredential>(null, (intptr_t)MethodInfo_ApplicationManagers_ApplicationVersion_GetPrivateVersion);
		pAVar1 = typeof(ApplicationVersion).static_fields;
		pAVar1.VersionProvider = __this;
		__this_00 = new Func<string, string>(null, (intptr_t)MethodInfo_ApplicationManagers_ApplicationVersion_GetPrivateHashCode);
		pAVar1 = typeof(ApplicationVersion).static_fields;
		pAVar1.HashProvider = __this_00;
		return;
	}

	[Token(Token = "0x600584D")]
	[Address(RVA = "0x5D0A620", Offset = "0x5D09620", VA = "0x5D0A620")]
	public static NetworkCredential GetPrivateVersion()
	{
		// Lifted from source/cpp/ApplicationManagers/ApplicationVersion.c (ApplicationManagers.ApplicationVersion$$GetPrivateVersion): clean
		NetworkCredential pSVar1;

		return pSVar1;
	}

	[Token(Token = "0x600584E")]
	[Address(RVA = "0x5D0A720", Offset = "0x5D09720", VA = "0x5D0A720")]
	public static string GetPrivateHashCode(string key)
	{
		// Lifted from source/cpp/ApplicationManagers/ApplicationVersion.c (ApplicationManagers.ApplicationVersion$$GetPrivateHashCode): clean
		String pSVar1;
		NetworkCredential __this;
		MethodInfo method_00;

		method_00 = (MethodInfo *)"PtzsW";
		pSVar1 = String.Concat(key, "PtzsW");
		pSVar1 = ApplicationEncoder.Encode1(pSVar1);
		__this = new NetworkCredential("REa9CMK4mN34Ec#86xN%!psve%J14C1S", pSVar1);
		if (__this == null) {
			throw new NullReferenceException();
		}
		pSVar1 = __this.Password;
		return pSVar1;
	}

	[Token(Token = "0x600584F")]
	[Address(RVA = "0x5D0A850", Offset = "0x5D09850", VA = "0x5D0A850")]
	public ApplicationVersion()
	{
		// Lifted from source/cpp/ApplicationManagers/ApplicationVersion.c (ApplicationManagers.ApplicationVersion$$.ctor): clean
		base();
		return;
	}
}
