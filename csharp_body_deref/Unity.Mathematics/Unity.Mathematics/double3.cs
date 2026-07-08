using System;
using System.ComponentModel;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.IL2CPP.CompilerServices;

namespace Unity.Mathematics;

[Serializable]
[Token(Token = "0x2000021")]
[DebuggerTypeProxy(typeof(DebuggerProxy))]
[Unity.IL2CPP.CompilerServices.Il2CppEagerStaticClassConstruction]
public struct double3 : IEquatable<double3>, IFormattable
{
	[Token(Token = "0x2000022")]
	internal sealed class DebuggerProxy
	{
		[Token(Token = "0x4000074")]
		[FieldOffset(Offset = "0x10")]
		public double x;

		[Token(Token = "0x4000075")]
		[FieldOffset(Offset = "0x18")]
		public double y;

		[Token(Token = "0x4000076")]
		[FieldOffset(Offset = "0x20")]
		public double z;

		[Token(Token = "0x6000CED")]
		[Address(RVA = "0x4790E10", Offset = "0x4790E10", VA = "0x4790E10")]
		public DebuggerProxy(double3 v)
		{
		}
	}

	[Token(Token = "0x4000070")]
	[FieldOffset(Offset = "0x0")]
	public double x;

	[Token(Token = "0x4000071")]
	[FieldOffset(Offset = "0x8")]
	public double y;

	[Token(Token = "0x4000072")]
	[FieldOffset(Offset = "0x10")]
	public double z;

	[Token(Token = "0x4000073")]
	[FieldOffset(Offset = "0x0")]
	public static readonly double3 zero;

	[Token(Token = "0x1700020E")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public double4 xxxx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000C65")]
		[Address(RVA = "0x478FC90", Offset = "0x478FC90", VA = "0x478FC90")]
		get
		{
			return default(double4);
		}
	}

	[Token(Token = "0x1700020F")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public double4 xxxy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000C66")]
		[Address(RVA = "0x478FCB0", Offset = "0x478FCB0", VA = "0x478FCB0")]
		get
		{
			return default(double4);
		}
	}

	[Token(Token = "0x17000210")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public double4 xxxz
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000C67")]
		[Address(RVA = "0x478FCD0", Offset = "0x478FCD0", VA = "0x478FCD0")]
		get
		{
			return default(double4);
		}
	}

	[Token(Token = "0x17000211")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public double4 xxyx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000C68")]
		[Address(RVA = "0x478FCF0", Offset = "0x478FCF0", VA = "0x478FCF0")]
		get
		{
			return default(double4);
		}
	}

	[Token(Token = "0x17000212")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public double4 xxyy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000C69")]
		[Address(RVA = "0x478FD10", Offset = "0x478FD10", VA = "0x478FD10")]
		get
		{
			return default(double4);
		}
	}

	[Token(Token = "0x17000213")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public double4 xxyz
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000C6A")]
		[Address(RVA = "0x478FD30", Offset = "0x478FD30", VA = "0x478FD30")]
		get
		{
			return default(double4);
		}
	}

	[Token(Token = "0x17000214")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public double4 xxzx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000C6B")]
		[Address(RVA = "0x478FD50", Offset = "0x478FD50", VA = "0x478FD50")]
		get
		{
			return default(double4);
		}
	}

	[Token(Token = "0x17000215")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public double4 xxzy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000C6C")]
		[Address(RVA = "0x478FD70", Offset = "0x478FD70", VA = "0x478FD70")]
		get
		{
			return default(double4);
		}
	}

	[Token(Token = "0x17000216")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public double4 xxzz
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000C6D")]
		[Address(RVA = "0x478FD90", Offset = "0x478FD90", VA = "0x478FD90")]
		get
		{
			return default(double4);
		}
	}

	[Token(Token = "0x17000217")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public double4 xyxx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000C6E")]
		[Address(RVA = "0x478FDB0", Offset = "0x478FDB0", VA = "0x478FDB0")]
		get
		{
			return default(double4);
		}
	}

	[Token(Token = "0x17000218")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public double4 xyxy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000C6F")]
		[Address(RVA = "0x478FDD0", Offset = "0x478FDD0", VA = "0x478FDD0")]
		get
		{
			return default(double4);
		}
	}

	[Token(Token = "0x17000219")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public double4 xyxz
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000C70")]
		[Address(RVA = "0x478FDF0", Offset = "0x478FDF0", VA = "0x478FDF0")]
		get
		{
			return default(double4);
		}
	}

	[Token(Token = "0x1700021A")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public double4 xyyx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000C71")]
		[Address(RVA = "0x478FE10", Offset = "0x478FE10", VA = "0x478FE10")]
		get
		{
			return default(double4);
		}
	}

	[Token(Token = "0x1700021B")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public double4 xyyy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000C72")]
		[Address(RVA = "0x478FE30", Offset = "0x478FE30", VA = "0x478FE30")]
		get
		{
			return default(double4);
		}
	}

	[Token(Token = "0x1700021C")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public double4 xyyz
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000C73")]
		[Address(RVA = "0x478FE50", Offset = "0x478FE50", VA = "0x478FE50")]
		get
		{
			return default(double4);
		}
	}

	[Token(Token = "0x1700021D")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public double4 xyzx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000C74")]
		[Address(RVA = "0x478FE70", Offset = "0x478FE70", VA = "0x478FE70")]
		get
		{
			return default(double4);
		}
	}

	[Token(Token = "0x1700021E")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public double4 xyzy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000C75")]
		[Address(RVA = "0x478FE90", Offset = "0x478FE90", VA = "0x478FE90")]
		get
		{
			return default(double4);
		}
	}

	[Token(Token = "0x1700021F")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public double4 xyzz
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000C76")]
		[Address(RVA = "0x478FEB0", Offset = "0x478FEB0", VA = "0x478FEB0")]
		get
		{
			return default(double4);
		}
	}

	[Token(Token = "0x17000220")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public double4 xzxx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000C77")]
		[Address(RVA = "0x478FED0", Offset = "0x478FED0", VA = "0x478FED0")]
		get
		{
			return default(double4);
		}
	}

	[Token(Token = "0x17000221")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public double4 xzxy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000C78")]
		[Address(RVA = "0x478FEF0", Offset = "0x478FEF0", VA = "0x478FEF0")]
		get
		{
			return default(double4);
		}
	}

	[Token(Token = "0x17000222")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public double4 xzxz
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000C79")]
		[Address(RVA = "0x478FF10", Offset = "0x478FF10", VA = "0x478FF10")]
		get
		{
			return default(double4);
		}
	}

	[Token(Token = "0x17000223")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public double4 xzyx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000C7A")]
		[Address(RVA = "0x478FF30", Offset = "0x478FF30", VA = "0x478FF30")]
		get
		{
			return default(double4);
		}
	}

	[Token(Token = "0x17000224")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public double4 xzyy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000C7B")]
		[Address(RVA = "0x478FF50", Offset = "0x478FF50", VA = "0x478FF50")]
		get
		{
			return default(double4);
		}
	}

	[Token(Token = "0x17000225")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public double4 xzyz
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000C7C")]
		[Address(RVA = "0x478FF70", Offset = "0x478FF70", VA = "0x478FF70")]
		get
		{
			return default(double4);
		}
	}

	[Token(Token = "0x17000226")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public double4 xzzx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000C7D")]
		[Address(RVA = "0x478FF90", Offset = "0x478FF90", VA = "0x478FF90")]
		get
		{
			return default(double4);
		}
	}

	[Token(Token = "0x17000227")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public double4 xzzy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000C7E")]
		[Address(RVA = "0x478FFB0", Offset = "0x478FFB0", VA = "0x478FFB0")]
		get
		{
			return default(double4);
		}
	}

	[Token(Token = "0x17000228")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public double4 xzzz
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000C7F")]
		[Address(RVA = "0x478FFD0", Offset = "0x478FFD0", VA = "0x478FFD0")]
		get
		{
			return default(double4);
		}
	}

	[Token(Token = "0x17000229")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public double4 yxxx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000C80")]
		[Address(RVA = "0x478FFF0", Offset = "0x478FFF0", VA = "0x478FFF0")]
		get
		{
			return default(double4);
		}
	}

	[Token(Token = "0x1700022A")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public double4 yxxy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000C81")]
		[Address(RVA = "0x4790010", Offset = "0x4790010", VA = "0x4790010")]
		get
		{
			return default(double4);
		}
	}

	[Token(Token = "0x1700022B")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public double4 yxxz
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000C82")]
		[Address(RVA = "0x4790030", Offset = "0x4790030", VA = "0x4790030")]
		get
		{
			return default(double4);
		}
	}

	[Token(Token = "0x1700022C")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public double4 yxyx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000C83")]
		[Address(RVA = "0x4790050", Offset = "0x4790050", VA = "0x4790050")]
		get
		{
			return default(double4);
		}
	}

	[Token(Token = "0x1700022D")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public double4 yxyy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000C84")]
		[Address(RVA = "0x4790070", Offset = "0x4790070", VA = "0x4790070")]
		get
		{
			return default(double4);
		}
	}

	[Token(Token = "0x1700022E")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public double4 yxyz
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000C85")]
		[Address(RVA = "0x4790090", Offset = "0x4790090", VA = "0x4790090")]
		get
		{
			return default(double4);
		}
	}

	[Token(Token = "0x1700022F")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public double4 yxzx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000C86")]
		[Address(RVA = "0x47900B0", Offset = "0x47900B0", VA = "0x47900B0")]
		get
		{
			return default(double4);
		}
	}

	[Token(Token = "0x17000230")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public double4 yxzy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000C87")]
		[Address(RVA = "0x47900D0", Offset = "0x47900D0", VA = "0x47900D0")]
		get
		{
			return default(double4);
		}
	}

	[Token(Token = "0x17000231")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public double4 yxzz
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000C88")]
		[Address(RVA = "0x47900F0", Offset = "0x47900F0", VA = "0x47900F0")]
		get
		{
			return default(double4);
		}
	}

	[Token(Token = "0x17000232")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public double4 yyxx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000C89")]
		[Address(RVA = "0x4790110", Offset = "0x4790110", VA = "0x4790110")]
		get
		{
			return default(double4);
		}
	}

	[Token(Token = "0x17000233")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public double4 yyxy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000C8A")]
		[Address(RVA = "0x4790130", Offset = "0x4790130", VA = "0x4790130")]
		get
		{
			return default(double4);
		}
	}

	[Token(Token = "0x17000234")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public double4 yyxz
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000C8B")]
		[Address(RVA = "0x4790150", Offset = "0x4790150", VA = "0x4790150")]
		get
		{
			return default(double4);
		}
	}

	[Token(Token = "0x17000235")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public double4 yyyx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000C8C")]
		[Address(RVA = "0x4790170", Offset = "0x4790170", VA = "0x4790170")]
		get
		{
			return default(double4);
		}
	}

	[Token(Token = "0x17000236")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public double4 yyyy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000C8D")]
		[Address(RVA = "0x4790190", Offset = "0x4790190", VA = "0x4790190")]
		get
		{
			return default(double4);
		}
	}

	[Token(Token = "0x17000237")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public double4 yyyz
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000C8E")]
		[Address(RVA = "0x47901B0", Offset = "0x47901B0", VA = "0x47901B0")]
		get
		{
			return default(double4);
		}
	}

	[Token(Token = "0x17000238")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public double4 yyzx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000C8F")]
		[Address(RVA = "0x47901D0", Offset = "0x47901D0", VA = "0x47901D0")]
		get
		{
			return default(double4);
		}
	}

	[Token(Token = "0x17000239")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public double4 yyzy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000C90")]
		[Address(RVA = "0x47901F0", Offset = "0x47901F0", VA = "0x47901F0")]
		get
		{
			return default(double4);
		}
	}

	[Token(Token = "0x1700023A")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public double4 yyzz
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000C91")]
		[Address(RVA = "0x4790210", Offset = "0x4790210", VA = "0x4790210")]
		get
		{
			return default(double4);
		}
	}

	[Token(Token = "0x1700023B")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public double4 yzxx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000C92")]
		[Address(RVA = "0x4790230", Offset = "0x4790230", VA = "0x4790230")]
		get
		{
			return default(double4);
		}
	}

	[Token(Token = "0x1700023C")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public double4 yzxy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000C93")]
		[Address(RVA = "0x4790250", Offset = "0x4790250", VA = "0x4790250")]
		get
		{
			return default(double4);
		}
	}

	[Token(Token = "0x1700023D")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public double4 yzxz
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000C94")]
		[Address(RVA = "0x4790270", Offset = "0x4790270", VA = "0x4790270")]
		get
		{
			return default(double4);
		}
	}

	[Token(Token = "0x1700023E")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public double4 yzyx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000C95")]
		[Address(RVA = "0x4790290", Offset = "0x4790290", VA = "0x4790290")]
		get
		{
			return default(double4);
		}
	}

	[Token(Token = "0x1700023F")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public double4 yzyy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000C96")]
		[Address(RVA = "0x47902B0", Offset = "0x47902B0", VA = "0x47902B0")]
		get
		{
			return default(double4);
		}
	}

	[Token(Token = "0x17000240")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public double4 yzyz
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000C97")]
		[Address(RVA = "0x47902D0", Offset = "0x47902D0", VA = "0x47902D0")]
		get
		{
			return default(double4);
		}
	}

	[Token(Token = "0x17000241")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public double4 yzzx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000C98")]
		[Address(RVA = "0x47902F0", Offset = "0x47902F0", VA = "0x47902F0")]
		get
		{
			return default(double4);
		}
	}

	[Token(Token = "0x17000242")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public double4 yzzy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000C99")]
		[Address(RVA = "0x4790310", Offset = "0x4790310", VA = "0x4790310")]
		get
		{
			return default(double4);
		}
	}

	[Token(Token = "0x17000243")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public double4 yzzz
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000C9A")]
		[Address(RVA = "0x4790330", Offset = "0x4790330", VA = "0x4790330")]
		get
		{
			return default(double4);
		}
	}

	[Token(Token = "0x17000244")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public double4 zxxx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000C9B")]
		[Address(RVA = "0x4790350", Offset = "0x4790350", VA = "0x4790350")]
		get
		{
			return default(double4);
		}
	}

	[Token(Token = "0x17000245")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public double4 zxxy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000C9C")]
		[Address(RVA = "0x4790370", Offset = "0x4790370", VA = "0x4790370")]
		get
		{
			return default(double4);
		}
	}

	[Token(Token = "0x17000246")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public double4 zxxz
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000C9D")]
		[Address(RVA = "0x4790390", Offset = "0x4790390", VA = "0x4790390")]
		get
		{
			return default(double4);
		}
	}

	[Token(Token = "0x17000247")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public double4 zxyx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000C9E")]
		[Address(RVA = "0x47903B0", Offset = "0x47903B0", VA = "0x47903B0")]
		get
		{
			return default(double4);
		}
	}

	[Token(Token = "0x17000248")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public double4 zxyy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000C9F")]
		[Address(RVA = "0x47903D0", Offset = "0x47903D0", VA = "0x47903D0")]
		get
		{
			return default(double4);
		}
	}

	[Token(Token = "0x17000249")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public double4 zxyz
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000CA0")]
		[Address(RVA = "0x47903F0", Offset = "0x47903F0", VA = "0x47903F0")]
		get
		{
			return default(double4);
		}
	}

	[Token(Token = "0x1700024A")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public double4 zxzx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000CA1")]
		[Address(RVA = "0x4790410", Offset = "0x4790410", VA = "0x4790410")]
		get
		{
			return default(double4);
		}
	}

	[Token(Token = "0x1700024B")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public double4 zxzy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000CA2")]
		[Address(RVA = "0x4790430", Offset = "0x4790430", VA = "0x4790430")]
		get
		{
			return default(double4);
		}
	}

	[Token(Token = "0x1700024C")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public double4 zxzz
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000CA3")]
		[Address(RVA = "0x4790450", Offset = "0x4790450", VA = "0x4790450")]
		get
		{
			return default(double4);
		}
	}

	[Token(Token = "0x1700024D")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public double4 zyxx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000CA4")]
		[Address(RVA = "0x4790470", Offset = "0x4790470", VA = "0x4790470")]
		get
		{
			return default(double4);
		}
	}

	[Token(Token = "0x1700024E")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public double4 zyxy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000CA5")]
		[Address(RVA = "0x4790490", Offset = "0x4790490", VA = "0x4790490")]
		get
		{
			return default(double4);
		}
	}

	[Token(Token = "0x1700024F")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public double4 zyxz
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000CA6")]
		[Address(RVA = "0x47904B0", Offset = "0x47904B0", VA = "0x47904B0")]
		get
		{
			return default(double4);
		}
	}

	[Token(Token = "0x17000250")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public double4 zyyx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000CA7")]
		[Address(RVA = "0x47904D0", Offset = "0x47904D0", VA = "0x47904D0")]
		get
		{
			return default(double4);
		}
	}

	[Token(Token = "0x17000251")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public double4 zyyy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000CA8")]
		[Address(RVA = "0x47904F0", Offset = "0x47904F0", VA = "0x47904F0")]
		get
		{
			return default(double4);
		}
	}

	[Token(Token = "0x17000252")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public double4 zyyz
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000CA9")]
		[Address(RVA = "0x4790510", Offset = "0x4790510", VA = "0x4790510")]
		get
		{
			return default(double4);
		}
	}

	[Token(Token = "0x17000253")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public double4 zyzx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000CAA")]
		[Address(RVA = "0x4790530", Offset = "0x4790530", VA = "0x4790530")]
		get
		{
			return default(double4);
		}
	}

	[Token(Token = "0x17000254")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public double4 zyzy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000CAB")]
		[Address(RVA = "0x4790550", Offset = "0x4790550", VA = "0x4790550")]
		get
		{
			return default(double4);
		}
	}

	[Token(Token = "0x17000255")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public double4 zyzz
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000CAC")]
		[Address(RVA = "0x4790570", Offset = "0x4790570", VA = "0x4790570")]
		get
		{
			return default(double4);
		}
	}

	[Token(Token = "0x17000256")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public double4 zzxx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000CAD")]
		[Address(RVA = "0x4790590", Offset = "0x4790590", VA = "0x4790590")]
		get
		{
			return default(double4);
		}
	}

	[Token(Token = "0x17000257")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public double4 zzxy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000CAE")]
		[Address(RVA = "0x47905B0", Offset = "0x47905B0", VA = "0x47905B0")]
		get
		{
			return default(double4);
		}
	}

	[Token(Token = "0x17000258")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public double4 zzxz
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000CAF")]
		[Address(RVA = "0x47905D0", Offset = "0x47905D0", VA = "0x47905D0")]
		get
		{
			return default(double4);
		}
	}

	[Token(Token = "0x17000259")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public double4 zzyx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000CB0")]
		[Address(RVA = "0x47905F0", Offset = "0x47905F0", VA = "0x47905F0")]
		get
		{
			return default(double4);
		}
	}

	[Token(Token = "0x1700025A")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public double4 zzyy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000CB1")]
		[Address(RVA = "0x4790610", Offset = "0x4790610", VA = "0x4790610")]
		get
		{
			return default(double4);
		}
	}

	[Token(Token = "0x1700025B")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public double4 zzyz
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000CB2")]
		[Address(RVA = "0x4790630", Offset = "0x4790630", VA = "0x4790630")]
		get
		{
			return default(double4);
		}
	}

	[Token(Token = "0x1700025C")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public double4 zzzx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000CB3")]
		[Address(RVA = "0x4790650", Offset = "0x4790650", VA = "0x4790650")]
		get
		{
			return default(double4);
		}
	}

	[Token(Token = "0x1700025D")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public double4 zzzy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000CB4")]
		[Address(RVA = "0x4790670", Offset = "0x4790670", VA = "0x4790670")]
		get
		{
			return default(double4);
		}
	}

	[Token(Token = "0x1700025E")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public double4 zzzz
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000CB5")]
		[Address(RVA = "0x4790690", Offset = "0x4790690", VA = "0x4790690")]
		get
		{
			return default(double4);
		}
	}

	[Token(Token = "0x1700025F")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public double3 xxx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000CB6")]
		[Address(RVA = "0x47906B0", Offset = "0x47906B0", VA = "0x47906B0")]
		get
		{
			return default(double3);
		}
	}

	[Token(Token = "0x17000260")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public double3 xxy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000CB7")]
		[Address(RVA = "0x47906D0", Offset = "0x47906D0", VA = "0x47906D0")]
		get
		{
			return default(double3);
		}
	}

	[Token(Token = "0x17000261")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public double3 xxz
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000CB8")]
		[Address(RVA = "0x47906E0", Offset = "0x47906E0", VA = "0x47906E0")]
		get
		{
			return default(double3);
		}
	}

	[Token(Token = "0x17000262")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public double3 xyx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000CB9")]
		[Address(RVA = "0x4790700", Offset = "0x4790700", VA = "0x4790700")]
		get
		{
			return default(double3);
		}
	}

	[Token(Token = "0x17000263")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public double3 xyy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000CBA")]
		[Address(RVA = "0x4790710", Offset = "0x4790710", VA = "0x4790710")]
		get
		{
			return default(double3);
		}
	}

	[Token(Token = "0x17000264")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public double3 xyz
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000CBB")]
		[Address(RVA = "0x4790730", Offset = "0x4790730", VA = "0x4790730")]
		get
		{
			return default(double3);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000CBC")]
		[Address(RVA = "0x4790750", Offset = "0x4790750", VA = "0x4790750")]
		set
		{
		}
	}

	[Token(Token = "0x17000265")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public double3 xzx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000CBD")]
		[Address(RVA = "0x4790770", Offset = "0x4790770", VA = "0x4790770")]
		get
		{
			return default(double3);
		}
	}

	[Token(Token = "0x17000266")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public double3 xzy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000CBE")]
		[Address(RVA = "0x4790790", Offset = "0x4790790", VA = "0x4790790")]
		get
		{
			return default(double3);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000CBF")]
		[Address(RVA = "0x47907B0", Offset = "0x47907B0", VA = "0x47907B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000267")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public double3 xzz
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000CC0")]
		[Address(RVA = "0x47907D0", Offset = "0x47907D0", VA = "0x47907D0")]
		get
		{
			return default(double3);
		}
	}

	[Token(Token = "0x17000268")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public double3 yxx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000CC1")]
		[Address(RVA = "0x47907F0", Offset = "0x47907F0", VA = "0x47907F0")]
		get
		{
			return default(double3);
		}
	}

	[Token(Token = "0x17000269")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public double3 yxy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000CC2")]
		[Address(RVA = "0x4790810", Offset = "0x4790810", VA = "0x4790810")]
		get
		{
			return default(double3);
		}
	}

	[Token(Token = "0x1700026A")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public double3 yxz
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000CC3")]
		[Address(RVA = "0x4790830", Offset = "0x4790830", VA = "0x4790830")]
		get
		{
			return default(double3);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000CC4")]
		[Address(RVA = "0x4790850", Offset = "0x4790850", VA = "0x4790850")]
		set
		{
		}
	}

	[Token(Token = "0x1700026B")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public double3 yyx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000CC5")]
		[Address(RVA = "0x4790870", Offset = "0x4790870", VA = "0x4790870")]
		get
		{
			return default(double3);
		}
	}

	[Token(Token = "0x1700026C")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public double3 yyy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000CC6")]
		[Address(RVA = "0x4790890", Offset = "0x4790890", VA = "0x4790890")]
		get
		{
			return default(double3);
		}
	}

	[Token(Token = "0x1700026D")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public double3 yyz
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000CC7")]
		[Address(RVA = "0x47908B0", Offset = "0x47908B0", VA = "0x47908B0")]
		get
		{
			return default(double3);
		}
	}

	[Token(Token = "0x1700026E")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public double3 yzx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000CC8")]
		[Address(RVA = "0x47908C0", Offset = "0x47908C0", VA = "0x47908C0")]
		get
		{
			return default(double3);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000CC9")]
		[Address(RVA = "0x47908E0", Offset = "0x47908E0", VA = "0x47908E0")]
		set
		{
		}
	}

	[Token(Token = "0x1700026F")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public double3 yzy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000CCA")]
		[Address(RVA = "0x4790900", Offset = "0x4790900", VA = "0x4790900")]
		get
		{
			return default(double3);
		}
	}

	[Token(Token = "0x17000270")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public double3 yzz
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000CCB")]
		[Address(RVA = "0x4790910", Offset = "0x4790910", VA = "0x4790910")]
		get
		{
			return default(double3);
		}
	}

	[Token(Token = "0x17000271")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public double3 zxx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000CCC")]
		[Address(RVA = "0x4790930", Offset = "0x4790930", VA = "0x4790930")]
		get
		{
			return default(double3);
		}
	}

	[Token(Token = "0x17000272")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public double3 zxy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000CCD")]
		[Address(RVA = "0x4790950", Offset = "0x4790950", VA = "0x4790950")]
		get
		{
			return default(double3);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000CCE")]
		[Address(RVA = "0x4790970", Offset = "0x4790970", VA = "0x4790970")]
		set
		{
		}
	}

	[Token(Token = "0x17000273")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public double3 zxz
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000CCF")]
		[Address(RVA = "0x4790990", Offset = "0x4790990", VA = "0x4790990")]
		get
		{
			return default(double3);
		}
	}

	[Token(Token = "0x17000274")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public double3 zyx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000CD0")]
		[Address(RVA = "0x47909B0", Offset = "0x47909B0", VA = "0x47909B0")]
		get
		{
			return default(double3);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000CD1")]
		[Address(RVA = "0x47909D0", Offset = "0x47909D0", VA = "0x47909D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000275")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public double3 zyy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000CD2")]
		[Address(RVA = "0x47909F0", Offset = "0x47909F0", VA = "0x47909F0")]
		get
		{
			return default(double3);
		}
	}

	[Token(Token = "0x17000276")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public double3 zyz
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000CD3")]
		[Address(RVA = "0x4790A10", Offset = "0x4790A10", VA = "0x4790A10")]
		get
		{
			return default(double3);
		}
	}

	[Token(Token = "0x17000277")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public double3 zzx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000CD4")]
		[Address(RVA = "0x4790A30", Offset = "0x4790A30", VA = "0x4790A30")]
		get
		{
			return default(double3);
		}
	}

	[Token(Token = "0x17000278")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public double3 zzy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000CD5")]
		[Address(RVA = "0x4790A50", Offset = "0x4790A50", VA = "0x4790A50")]
		get
		{
			return default(double3);
		}
	}

	[Token(Token = "0x17000279")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public double3 zzz
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000CD6")]
		[Address(RVA = "0x4790A70", Offset = "0x4790A70", VA = "0x4790A70")]
		get
		{
			return default(double3);
		}
	}

	[Token(Token = "0x1700027A")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public double2 xx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000CD7")]
		[Address(RVA = "0x4790A90", Offset = "0x4790A90", VA = "0x4790A90")]
		get
		{
			return default(double2);
		}
	}

	[Token(Token = "0x1700027B")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public double2 xy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000CD8")]
		[Address(RVA = "0x4790AA0", Offset = "0x4790AA0", VA = "0x4790AA0")]
		get
		{
			return default(double2);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000CD9")]
		[Address(RVA = "0x4790AB0", Offset = "0x4790AB0", VA = "0x4790AB0")]
		set
		{
		}
	}

	[Token(Token = "0x1700027C")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public double2 xz
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000CDA")]
		[Address(RVA = "0x4790AC0", Offset = "0x4790AC0", VA = "0x4790AC0")]
		get
		{
			return default(double2);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000CDB")]
		[Address(RVA = "0x4790AD0", Offset = "0x4790AD0", VA = "0x4790AD0")]
		set
		{
		}
	}

	[Token(Token = "0x1700027D")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public double2 yx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000CDC")]
		[Address(RVA = "0x4790AE0", Offset = "0x4790AE0", VA = "0x4790AE0")]
		get
		{
			return default(double2);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000CDD")]
		[Address(RVA = "0x4790AF0", Offset = "0x4790AF0", VA = "0x4790AF0")]
		set
		{
		}
	}

	[Token(Token = "0x1700027E")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public double2 yy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000CDE")]
		[Address(RVA = "0x4790B00", Offset = "0x4790B00", VA = "0x4790B00")]
		get
		{
			return default(double2);
		}
	}

	[Token(Token = "0x1700027F")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public double2 yz
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000CDF")]
		[Address(RVA = "0x4790B10", Offset = "0x4790B10", VA = "0x4790B10")]
		get
		{
			return default(double2);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000CE0")]
		[Address(RVA = "0x4790B20", Offset = "0x4790B20", VA = "0x4790B20")]
		set
		{
		}
	}

	[Token(Token = "0x17000280")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public double2 zx
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000CE1")]
		[Address(RVA = "0x4790B30", Offset = "0x4790B30", VA = "0x4790B30")]
		get
		{
			return default(double2);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000CE2")]
		[Address(RVA = "0x4790B40", Offset = "0x4790B40", VA = "0x4790B40")]
		set
		{
		}
	}

	[Token(Token = "0x17000281")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public double2 zy
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000CE3")]
		[Address(RVA = "0x4790B50", Offset = "0x4790B50", VA = "0x4790B50")]
		get
		{
			return default(double2);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000CE4")]
		[Address(RVA = "0x4790B60", Offset = "0x4790B60", VA = "0x4790B60")]
		set
		{
		}
	}

	[Token(Token = "0x17000282")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public double2 zz
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000CE5")]
		[Address(RVA = "0x4790B70", Offset = "0x4790B70", VA = "0x4790B70")]
		get
		{
			return default(double2);
		}
	}

	[Token(Token = "0x17000283")]
	public double this[int index]
	{
		[Token(Token = "0x6000CE6")]
		[Address(RVA = "0x4790B80", Offset = "0x4790B80", VA = "0x4790B80")]
		get
		{
			return default(double);
		}
		[Token(Token = "0x6000CE7")]
		[Address(RVA = "0x4790B90", Offset = "0x4790B90", VA = "0x4790B90")]
		set
		{
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C26")]
	[Address(RVA = "0x478ECA0", Offset = "0x478ECA0", VA = "0x478ECA0")]
	public double3(double x, double y, double z)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C27")]
	[Address(RVA = "0x478ECB0", Offset = "0x478ECB0", VA = "0x478ECB0")]
	public double3(double x, double2 yz)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C28")]
	[Address(RVA = "0x478ECC0", Offset = "0x478ECC0", VA = "0x478ECC0")]
	public double3(double2 xy, double z)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C29")]
	[Address(RVA = "0x478ECD0", Offset = "0x478ECD0", VA = "0x478ECD0")]
	public double3(double3 xyz)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C2A")]
	[Address(RVA = "0x478ECF0", Offset = "0x478ECF0", VA = "0x478ECF0")]
	public double3(double v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C2B")]
	[Address(RVA = "0x478ED00", Offset = "0x478ED00", VA = "0x478ED00")]
	public double3(bool v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C2C")]
	[Address(RVA = "0x478ED30", Offset = "0x478ED30", VA = "0x478ED30")]
	public double3(bool3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C2D")]
	[Address(RVA = "0x478EDA0", Offset = "0x478EDA0", VA = "0x478EDA0")]
	public double3(int v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C2E")]
	[Address(RVA = "0x478EDC0", Offset = "0x478EDC0", VA = "0x478EDC0")]
	public double3(int3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C2F")]
	[Address(RVA = "0x478EDF0", Offset = "0x478EDF0", VA = "0x478EDF0")]
	public double3(uint v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C30")]
	[Address(RVA = "0x478EE10", Offset = "0x478EE10", VA = "0x478EE10")]
	public double3(uint3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C31")]
	[Address(RVA = "0x478EE40", Offset = "0x478EE40", VA = "0x478EE40")]
	public double3(half v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C32")]
	[Address(RVA = "0x478EEC0", Offset = "0x478EEC0", VA = "0x478EEC0")]
	public double3(half3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C33")]
	[Address(RVA = "0x478EFF0", Offset = "0x478EFF0", VA = "0x478EFF0")]
	public double3(float v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C34")]
	[Address(RVA = "0x478F010", Offset = "0x478F010", VA = "0x478F010")]
	public double3(float3 v)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C35")]
	[Address(RVA = "0x478F030", Offset = "0x478F030", VA = "0x478F030")]
	public static implicit operator double3(double v)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C36")]
	[Address(RVA = "0x478F050", Offset = "0x478F050", VA = "0x478F050")]
	public static explicit operator double3(bool v)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C37")]
	[Address(RVA = "0x478F080", Offset = "0x478F080", VA = "0x478F080")]
	public static explicit operator double3(bool3 v)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C38")]
	[Address(RVA = "0x478F0F0", Offset = "0x478F0F0", VA = "0x478F0F0")]
	public static implicit operator double3(int v)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C39")]
	[Address(RVA = "0x478F110", Offset = "0x478F110", VA = "0x478F110")]
	public static implicit operator double3(int3 v)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C3A")]
	[Address(RVA = "0x478F140", Offset = "0x478F140", VA = "0x478F140")]
	public static implicit operator double3(uint v)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C3B")]
	[Address(RVA = "0x478F160", Offset = "0x478F160", VA = "0x478F160")]
	public static implicit operator double3(uint3 v)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C3C")]
	[Address(RVA = "0x478F190", Offset = "0x478F190", VA = "0x478F190")]
	public static implicit operator double3(half v)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C3D")]
	[Address(RVA = "0x478F210", Offset = "0x478F210", VA = "0x478F210")]
	public static implicit operator double3(half3 v)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C3E")]
	[Address(RVA = "0x478F350", Offset = "0x478F350", VA = "0x478F350")]
	public static implicit operator double3(float v)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C3F")]
	[Address(RVA = "0x478F370", Offset = "0x478F370", VA = "0x478F370")]
	public static implicit operator double3(float3 v)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C40")]
	[Address(RVA = "0x478F390", Offset = "0x478F390", VA = "0x478F390")]
	public static double3 operator *(double3 lhs, double3 rhs)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C41")]
	[Address(RVA = "0x478F3C0", Offset = "0x478F3C0", VA = "0x478F3C0")]
	public static double3 operator *(double3 lhs, double rhs)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C42")]
	[Address(RVA = "0x478F3F0", Offset = "0x478F3F0", VA = "0x478F3F0")]
	public static double3 operator *(double lhs, double3 rhs)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C43")]
	[Address(RVA = "0x478F420", Offset = "0x478F420", VA = "0x478F420")]
	public static double3 operator +(double3 lhs, double3 rhs)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C44")]
	[Address(RVA = "0x478F450", Offset = "0x478F450", VA = "0x478F450")]
	public static double3 operator +(double3 lhs, double rhs)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C45")]
	[Address(RVA = "0x478F480", Offset = "0x478F480", VA = "0x478F480")]
	public static double3 operator +(double lhs, double3 rhs)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C46")]
	[Address(RVA = "0x478F4B0", Offset = "0x478F4B0", VA = "0x478F4B0")]
	public static double3 operator -(double3 lhs, double3 rhs)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C47")]
	[Address(RVA = "0x478F4E0", Offset = "0x478F4E0", VA = "0x478F4E0")]
	public static double3 operator -(double3 lhs, double rhs)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C48")]
	[Address(RVA = "0x478F510", Offset = "0x478F510", VA = "0x478F510")]
	public static double3 operator -(double lhs, double3 rhs)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C49")]
	[Address(RVA = "0x478F540", Offset = "0x478F540", VA = "0x478F540")]
	public static double3 operator /(double3 lhs, double3 rhs)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C4A")]
	[Address(RVA = "0x478F570", Offset = "0x478F570", VA = "0x478F570")]
	public static double3 operator /(double3 lhs, double rhs)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C4B")]
	[Address(RVA = "0x478F5A0", Offset = "0x478F5A0", VA = "0x478F5A0")]
	public static double3 operator /(double lhs, double3 rhs)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C4C")]
	[Address(RVA = "0x478F5D0", Offset = "0x478F5D0", VA = "0x478F5D0")]
	public static double3 operator %(double3 lhs, double3 rhs)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C4D")]
	[Address(RVA = "0x478F670", Offset = "0x478F670", VA = "0x478F670")]
	public static double3 operator %(double3 lhs, double rhs)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C4E")]
	[Address(RVA = "0x478F700", Offset = "0x478F700", VA = "0x478F700")]
	public static double3 operator %(double lhs, double3 rhs)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C4F")]
	[Address(RVA = "0x478F780", Offset = "0x478F780", VA = "0x478F780")]
	public static double3 operator ++(double3 val)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C50")]
	[Address(RVA = "0x478F7B0", Offset = "0x478F7B0", VA = "0x478F7B0")]
	public static double3 operator --(double3 val)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C51")]
	[Address(RVA = "0x478F7E0", Offset = "0x478F7E0", VA = "0x478F7E0")]
	public static bool3 operator <(double3 lhs, double3 rhs)
	{
		return default(bool3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C52")]
	[Address(RVA = "0x478F820", Offset = "0x478F820", VA = "0x478F820")]
	public static bool3 operator <(double3 lhs, double rhs)
	{
		return default(bool3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C53")]
	[Address(RVA = "0x478F850", Offset = "0x478F850", VA = "0x478F850")]
	public static bool3 operator <(double lhs, double3 rhs)
	{
		return default(bool3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C54")]
	[Address(RVA = "0x478F890", Offset = "0x478F890", VA = "0x478F890")]
	public static bool3 operator <=(double3 lhs, double3 rhs)
	{
		return default(bool3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C55")]
	[Address(RVA = "0x478F8D0", Offset = "0x478F8D0", VA = "0x478F8D0")]
	public static bool3 operator <=(double3 lhs, double rhs)
	{
		return default(bool3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C56")]
	[Address(RVA = "0x478F900", Offset = "0x478F900", VA = "0x478F900")]
	public static bool3 operator <=(double lhs, double3 rhs)
	{
		return default(bool3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C57")]
	[Address(RVA = "0x478F940", Offset = "0x478F940", VA = "0x478F940")]
	public static bool3 operator >(double3 lhs, double3 rhs)
	{
		return default(bool3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C58")]
	[Address(RVA = "0x478F980", Offset = "0x478F980", VA = "0x478F980")]
	public static bool3 operator >(double3 lhs, double rhs)
	{
		return default(bool3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C59")]
	[Address(RVA = "0x478F9C0", Offset = "0x478F9C0", VA = "0x478F9C0")]
	public static bool3 operator >(double lhs, double3 rhs)
	{
		return default(bool3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C5A")]
	[Address(RVA = "0x478F9F0", Offset = "0x478F9F0", VA = "0x478F9F0")]
	public static bool3 operator >=(double3 lhs, double3 rhs)
	{
		return default(bool3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C5B")]
	[Address(RVA = "0x478FA30", Offset = "0x478FA30", VA = "0x478FA30")]
	public static bool3 operator >=(double3 lhs, double rhs)
	{
		return default(bool3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C5C")]
	[Address(RVA = "0x478FA70", Offset = "0x478FA70", VA = "0x478FA70")]
	public static bool3 operator >=(double lhs, double3 rhs)
	{
		return default(bool3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C5D")]
	[Address(RVA = "0x478FAA0", Offset = "0x478FAA0", VA = "0x478FAA0")]
	public static double3 operator -(double3 val)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C5E")]
	[Address(RVA = "0x478FAD0", Offset = "0x478FAD0", VA = "0x478FAD0")]
	public static double3 operator +(double3 val)
	{
		return default(double3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C5F")]
	[Address(RVA = "0x478FAF0", Offset = "0x478FAF0", VA = "0x478FAF0")]
	public static bool3 operator ==(double3 lhs, double3 rhs)
	{
		return default(bool3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C60")]
	[Address(RVA = "0x478FB40", Offset = "0x478FB40", VA = "0x478FB40")]
	public static bool3 operator ==(double3 lhs, double rhs)
	{
		return default(bool3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C61")]
	[Address(RVA = "0x478FB80", Offset = "0x478FB80", VA = "0x478FB80")]
	public static bool3 operator ==(double lhs, double3 rhs)
	{
		return default(bool3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C62")]
	[Address(RVA = "0x478FBC0", Offset = "0x478FBC0", VA = "0x478FBC0")]
	public static bool3 operator !=(double3 lhs, double3 rhs)
	{
		return default(bool3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C63")]
	[Address(RVA = "0x478FC10", Offset = "0x478FC10", VA = "0x478FC10")]
	public static bool3 operator !=(double3 lhs, double rhs)
	{
		return default(bool3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000C64")]
	[Address(RVA = "0x478FC50", Offset = "0x478FC50", VA = "0x478FC50")]
	public static bool3 operator !=(double lhs, double3 rhs)
	{
		return default(bool3);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000CE8")]
	[Address(RVA = "0x4790BA0", Offset = "0x4790BA0", VA = "0x4790BA0", Slot = "4")]
	public bool Equals(double3 rhs)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CE9")]
	[Address(RVA = "0x4790BE0", Offset = "0x4790BE0", VA = "0x4790BE0", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000CEA")]
	[Address(RVA = "0x4790C70", Offset = "0x4790C70", VA = "0x4790C70", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000CEB")]
	[Address(RVA = "0x4790CD0", Offset = "0x4790CD0", VA = "0x4790CD0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000CEC")]
	[Address(RVA = "0x4790D80", Offset = "0x4790D80", VA = "0x4790D80", Slot = "5")]
	public string ToString(string format, IFormatProvider formatProvider)
	{
		return null;
	}
}
