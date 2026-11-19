// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.Utilities.DynamicUtils
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Dynamic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Newtonsoft.Json.Utilities;

[Token(Token = "0x20000BC")]
internal static class DynamicUtils
{
	[Token(Token = "0x20000BD")]
	internal static class BinderWrapper
	{
		[Token(Token = "0x4000430")]
		public const string CSharpAssemblyName = "Microsoft.CSharp, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b03f5f7f11d50a3a";

		[Token(Token = "0x4000431")]
		private const string BinderTypeName = "Microsoft.CSharp.RuntimeBinder.Binder, Microsoft.CSharp, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b03f5f7f11d50a3a";

		[Token(Token = "0x4000432")]
		private const string CSharpArgumentInfoTypeName = "Microsoft.CSharp.RuntimeBinder.CSharpArgumentInfo, Microsoft.CSharp, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b03f5f7f11d50a3a";

		[Token(Token = "0x4000433")]
		private const string CSharpArgumentInfoFlagsTypeName = "Microsoft.CSharp.RuntimeBinder.CSharpArgumentInfoFlags, Microsoft.CSharp, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b03f5f7f11d50a3a";

		[Token(Token = "0x4000434")]
		private const string CSharpBinderFlagsTypeName = "Microsoft.CSharp.RuntimeBinder.CSharpBinderFlags, Microsoft.CSharp, Version=4.0.0.0, Culture=neutral, PublicKeyToken=b03f5f7f11d50a3a";

		[Token(Token = "0x4000435")]
		[FieldOffset(Offset = "0x0")]
		private static object? _getCSharpArgumentInfoArray;

		[Token(Token = "0x4000436")]
		[FieldOffset(Offset = "0x8")]
		private static object? _setCSharpArgumentInfoArray;

		[Token(Token = "0x4000437")]
		[FieldOffset(Offset = "0x10")]
		private static MethodCall<object?, object?>? _getMemberCall;

		[Token(Token = "0x4000438")]
		[FieldOffset(Offset = "0x18")]
		private static MethodCall<object?, object?>? _setMemberCall;

		[Token(Token = "0x4000439")]
		[FieldOffset(Offset = "0x20")]
		private static bool _init;

		[Token(Token = "0x60005EE")]
		[Address(RVA = "0x55AF950", Offset = "0x55AE950", VA = "0x55AF950")]
		private static void Init()
		{
		}

		[Token(Token = "0x60005EF")]
		[Address(RVA = "0x55AFB50", Offset = "0x55AEB50", VA = "0x55AFB50")]
		private static object CreateSharpArgumentInfoArray(params int[] values)
		{
			return null;
		}

		[Token(Token = "0x60005F0")]
		[Address(RVA = "0x55AFE40", Offset = "0x55AEE40", VA = "0x55AFE40")]
		private static void CreateMemberCalls()
		{
		}

		[Token(Token = "0x60005F1")]
		[Address(RVA = "0x55B03A0", Offset = "0x55AF3A0", VA = "0x55B03A0")]
		public static CallSiteBinder GetMember(string name, Type context)
		{
			return null;
		}

		[Token(Token = "0x60005F2")]
		[Address(RVA = "0x55B05A0", Offset = "0x55AF5A0", VA = "0x55B05A0")]
		public static CallSiteBinder SetMember(string name, Type context)
		{
			return null;
		}
	}

	[Token(Token = "0x60005ED")]
	[Address(RVA = "0x55AF850", Offset = "0x55AE850", VA = "0x55AF850")]
	public static IEnumerable<string> GetDynamicMemberNames(this IDynamicMetaObjectProvider dynamicProvider)
	{
		return null;
	}
}
