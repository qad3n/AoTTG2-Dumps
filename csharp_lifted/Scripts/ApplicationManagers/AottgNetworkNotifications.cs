// ==================== AoTTG2 cross-reference ====================
// Type: ApplicationManagers.AottgNetworkNotifications
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/ApplicationManagers/AottgNetworkNotifications.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace ApplicationManagers;

[Token(Token = "0x200096C")]
public static class AottgNetworkNotifications
{
	[Token(Token = "0x4002F67")]
	public const string NetworkError = "network_error";

	[Token(Token = "0x4002F68")]
	[FieldOffset(Offset = "0x0")]
	[CompilerGenerated]
	private static Action<string> m_OnNetworkError;

	[Token(Token = "0x4002F69")]
	[FieldOffset(Offset = "0x8")]
	[CompilerGenerated]
	private static Action<short, bool> m_OnRoomEntryFailed;

	[Token(Token = "0x14000013")]
	public static event Action<string> OnNetworkError
	{
		[Token(Token = "0x6005839")]
		[Address(RVA = "0x5D07C80", Offset = "0x5D06C80", VA = "0x5D07C80")]
		[CompilerGenerated]
		add
		{
			// Lifted from source/cpp/ApplicationManagers/AottgNetworkNotifications.c (ApplicationManagers.AottgNetworkNotifications$$add_OnNetworkError): 1 lines keep C-only constructs
			Action<string> pSVar2;
			Delegate obj;
			object value_00;
			Action<string> a;
			bool bVar3;

			a = AottgNetworkNotifications.OnNetworkError;
			do {
				obj = Delegate.Combine((Delegate)a, (Delegate)value);
				value_00 = null;
				if (obj != null) {
					value_00 = ((object)obj as Action<string>);
					if (value_00 == null) {
						throw new InvalidCastException();
					}
				}
				pSVar2 = il2cpp_codegen_interlocked_compare_exchange_ref(&AottgNetworkNotifications.OnNetworkError, value_00, a);
				bVar3 = pSVar2 != a;
				a = pSVar2;
			} while (bVar3);
			return;
		}
		[Token(Token = "0x600583A")]
		[Address(RVA = "0x5D07D50", Offset = "0x5D06D50", VA = "0x5D07D50")]
		[CompilerGenerated]
		remove
		{
			// Lifted from source/cpp/ApplicationManagers/AottgNetworkNotifications.c (ApplicationManagers.AottgNetworkNotifications$$remove_OnNetworkError): 1 lines keep C-only constructs
			Action<string> pSVar2;
			Delegate obj;
			object value_00;
			Action<string> source;
			bool bVar3;

			source = AottgNetworkNotifications.OnNetworkError;
			do {
				obj = Delegate.Remove((Delegate)source, (Delegate)value);
				value_00 = null;
				if (obj != null) {
					value_00 = ((object)obj as Action<string>);
					if (value_00 == null) {
						throw new InvalidCastException();
					}
				}
				pSVar2 = il2cpp_codegen_interlocked_compare_exchange_ref(&AottgNetworkNotifications.OnNetworkError, value_00, source);
				bVar3 = pSVar2 != source;
				source = pSVar2;
			} while (bVar3);
			return;
		}
	}

	[Token(Token = "0x14000014")]
	public static event Action<short, bool> OnRoomEntryFailed
	{
		[Token(Token = "0x600583B")]
		[Address(RVA = "0x5D07E20", Offset = "0x5D06E20", VA = "0x5D07E20")]
		[CompilerGenerated]
		add
		{
			// Lifted from source/cpp/ApplicationManagers/AottgNetworkNotifications.c (ApplicationManagers.AottgNetworkNotifications$$add_OnRoomEntryFailed): 1 lines keep C-only constructs
			Action<short, bool> pSVar2;
			Delegate obj;
			object value_00;
			Action<short, bool> a;
			bool bVar3;

			a = AottgNetworkNotifications.OnRoomEntryFailed;
			do {
				obj = Delegate.Combine((Delegate)a, (Delegate)value);
				value_00 = null;
				if (obj != null) {
					value_00 = ((object)obj as Action<short, bool>) ;
					if (value_00 == null) {
						throw new InvalidCastException();
					}
				}
				pSVar2 = il2cpp_codegen_interlocked_compare_exchange_ref(&AottgNetworkNotifications. OnRoomEntryFailed, value_00, a);
				bVar3 = pSVar2 != a;
				a = pSVar2;
			} while (bVar3);
			return;
		}
		[Token(Token = "0x600583C")]
		[Address(RVA = "0x5D07EF0", Offset = "0x5D06EF0", VA = "0x5D07EF0")]
		[CompilerGenerated]
		remove
		{
			// Lifted from source/cpp/ApplicationManagers/AottgNetworkNotifications.c (ApplicationManagers.AottgNetworkNotifications$$remove_OnRoomEntryFailed): 1 lines keep C-only constructs
			Action<short, bool> pSVar2;
			Delegate obj;
			object value_00;
			Action<short, bool> source;
			bool bVar3;

			source = AottgNetworkNotifications.OnRoomEntryFailed;
			do {
				obj = Delegate.Remove((Delegate)source, (Delegate)value);
				value_00 = null;
				if (obj != null) {
					value_00 = ((object)obj as Action<short, bool>) ;
					if (value_00 == null) {
						throw new InvalidCastException();
					}
				}
				pSVar2 = il2cpp_codegen_interlocked_compare_exchange_ref(&AottgNetworkNotifications. OnRoomEntryFailed, value_00, source);
				bVar3 = pSVar2 != source;
				source = pSVar2;
			} while (bVar3);
			return;
		}
	}

	[Token(Token = "0x600583D")]
	[Address(RVA = "0x5D07FC0", Offset = "0x5D06FC0", VA = "0x5D07FC0")]
	public static void ReportRoomEntryFailed(short returnCode, bool creating)
	{
		// Lifted from source/cpp/ApplicationManagers/AottgNetworkNotifications.c (ApplicationManagers.AottgNetworkNotifications$$ReportRoomEntryFailed): 1 lines keep C-only constructs
		Action<short, bool> pSVar1;
		code *vtableDispatch;

		pSVar1 = AottgNetworkNotifications.OnRoomEntryFailed;
		if (pSVar1 == null) {
			return;
		}
		vtableDispatch = (code)pSVar1.invoke_impl;
		(*vtableDispatch)(pSVar1.method_code,(int)returnCode,creating,pSVar1.method, vtableDispatch);
		return;
	}

	[Token(Token = "0x600583E")]
	[Address(RVA = "0x5D08020", Offset = "0x5D07020", VA = "0x5D08020")]
	public static bool TryReport(string error)
	{
		// Lifted from source/cpp/ApplicationManagers/AottgNetworkNotifications.c (ApplicationManagers.AottgNetworkNotifications$$TryReport): clean
		Action<string> pSVar1;
		bool bVar2;

		bVar2 = String.Equals(error, "network_error", 5);
		if ((bVar2) &&(pSVar1 = AottgNetworkNotifications.OnNetworkError, pSVar1 != null)) {
			(*(code)pSVar1.invoke_impl)(pSVar1.method_code,error,pSVar1.method);
		}
		return bVar2;
	}
}
